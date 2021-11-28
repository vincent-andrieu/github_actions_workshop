#!/bin/bash

NBR_TESTS=0
NBR_TESTS_SUCCEED=0

print_succeed()
{
    echo -e "\e[32mTest succeed\e[0m: $1" 1>&2
}

print_failed()
{
    echo -e "\e[31mTest failed\e[0m: $1" 1>&2
    echo -e "\tExpected:\t[$3$]" 1>&2
    echo -e "\tGot:\t\t["$2"]" 1>&2
}

launch_test()
{
    local cmd="$1"
    local expected=$2
    local result=$($cmd)

    NBR_TESTS=$[$NBR_TESTS+1]
    if [[ $result != $expected ]]; then
        print_failed "$cmd" "$result" "$expected"
    else
        NBR_TESTS_SUCCEED=$[$NBR_TESTS_SUCCEED+1]
        print_succeed "$cmd"
    fi
}

launch_test "./my_hello" "Hello world !"
launch_test "./my_hello John" "Hello John !"
launch_test "./my_hello Doe" "Hello Doe !"

if [[ NBR_TESTS_SUCCEED -ne NBR_TESTS ]]; then
    exit 1
fi