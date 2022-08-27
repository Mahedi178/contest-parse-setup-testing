#!/bin/bash

green=$(tput setaf 71);
red=$(tput setaf 196);
blue=$(tput setaf 32);
orange=$(tput setaf 178);
bold=$(tput bold);
reset=$(tput sgr0);
white=$(tput setaf 15);

for i in in*
do
	j=$(echo $i | tail -c +3 | head -c 1)
	out="out$j.out"
	./main < $i > "res$j.out"
	if [ -z "$(diff -b res$j.out $out)" ]
	then
		echo "Test $j: ${bold}${green}Passed ✅${reset}"
	else
		echo "Test $j: ${bold}${red}Failed ❌${reset}"
		echo "Correct answer:"
		cat $out
		echo "Your answer:"
		cat "res$j.out"
	fi
done
