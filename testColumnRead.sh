#!/usr/bin/bash

lineNum=3
firstColumn="start"
secondColumn="start"

function navToPath {
	printf "Attempting to navigate to the path\n"
	dPath=$(cut -d , -f1 testExcel.csv | sed -n -e 1p)
	cd "$dPath" || exit
}

function findReplace {
	printf "Attempting find and replace\n"
	while [[ -n $firstColumn ]]; do
		firstColumn=$(cut -d , -f 1 testExcel.csv | sed -n -e "$lineNum"p)
		secondColumn=$(cut -d , -f 2 testExcel.csv | sed -n -e "$lineNum"p)
		replace="s/$firstColumn/$secondColumn/g";	
		find . -type f \( -name '*.xml' -o -name '*.componentType' -o -name '*.bak' -o -name '*.composite' \) -exec sed -i "$replace" {} +
		printf "%s\n" "Replacing"
		printf "%s\n" "$firstColumn"
		printf "%s\n" "$secondColumn"
		lineNum=$((lineNum+1))
	done
	printf "Find and replace finished\n"
}
	navToPath
	findReplace
read -p "Finished..."