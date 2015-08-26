#!/usr/bin/bash
dPath=$(cut -d , -f1 testFind.csv | sed -n -e 1p)
cd "$dPath"
pwd
read -p "Finished..."