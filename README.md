# SSE-BP
 Simple test application to test a problem statement on Singly linked list
## Description
It is a repo which tests the soultion to a problem statement on linked list
## Build
To build the application simply make which will build two
binaries under the bin folder for Debug & Release. To clean 
it run `make clean`. To build only debug/release run `make debug` 
or `make release`. 

## Tests
The console application itself is a Google test application. So you need to have a Google
test framework installed and active or available on your build machine to successfully
run this application. If you don't have one you can run `GoogleTest.sh` script to
downlaod and install GoogleTest framework on your Mac machine (the script is made for
MacOS Ventura on M2 machine but can be easily modified for any other OS and configuration)

## Memory Leaks
The console application has been tested for memory leaks using `leaks` tool on MacOS Ventura
and none found. You can ru it by using `leaks --atExit --list -- ./bin/SSEBPTestD --gtest_shuffle --gtest_repeat=3`

