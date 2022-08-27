#!/bin/bash
green=$(tput setaf 71);
red=$(tput setaf 1);
blue=$(tput setaf 32);
orange=$(tput setaf 178);
bold=$(tput bold);
reset=$(tput sgr0);
white=$(tput setaf 15);

#Get current Directory
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

# You can change the version of C++ or add the compiler flags you wish
g++ -std=c++17 "$SCRIPT_DIR"/gen.cpp -o gen || { echo "${bold}${orange}Compilation Error ⚠️${reset}" in gen.cpp; exit 1; }
g++ -std=c++17 "$SCRIPT_DIR"/main.cpp -o main || { echo "${bold}${orange}Compilation Error ⚠️${reset}" in Tmain.cpp; exit 1; }
g++ -std=c++17 "$SCRIPT_DIR"/brute.cpp -o brute || { echo "${bold}${orange}Compilation Error ⚠️${reset}" in Cbrute.cpp; exit 1; }

#Change number of testcasescc1plus: fatal error: gen.cpp: No such file or directory
max_tests=$1
diff_found=0
i=1

while [ $i -le $max_tests ]
do
    # Generate test_case and save it in input.txt
    ./gen > input.txt

    # run main main, take input from above generated test case i.e. from input.txt
    # and save it in main_output.txt
    ./main < input.txt > myAnswer.txt #|| {echo failed; exit 1;}

    # run brute main, take input from above generated test case i.e. from input.txt
    # and save it in brute_output.txt
    ./brute < input.txt > output.txt

    # check if files main_output and Brute_output
    # differs(we are ignoring spaces and then comparing files)
    if diff --tabsize=1 -F --label --side-by-side --ignore-space-change myAnswer.txt output.txt > dont_show_on_terminal.txt; then
        echo ""
        echo "${orange}main Case #$i: ${bold}${green}Passed ✅${reset}"
    else
        echo ""
        echo "${orange}test case #$i: ${bold}${red}Failed ❌${reset}"
        diff_found=1
        break
    fi
    i=$((i+1))
done

if [ $diff_found -eq 1 ]
then
    echo ""
    echo "${white}Input: ${blue}"
    cat input.txt

    echo ""
    echo "${white}Output: ${blue}"
    cat myAnswer.txt

    echo ""
    echo "${white}Expected: ${blue}"
    cat output.txt

    #notify-send "Wrong Answer ❌"
    #else
    #notify-send "Accepted ✅"
fi

rm output.txt
rm myAnswer.txt
rm dont_show_on_terminal.txt
rm gen.exe main.exe brute.exe
echo ""
