#!/bin/bash
cd /home/kali/Desktop/
#sozdanie papki
mkdir 9091
cd 9091
mkdir chaliy
cd chaliy
#vivod date in fail
date > chaliy.txt
#vivod date next Monday
date -d "2021-08-03 12:54:21" > filedate.txt
cat chaliy.txt filedate.txt > result.txt
cat result.txt
