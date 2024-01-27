#!/bin/bash
#
# Author: Dave
# test  
# What it does?
#     verify if the date of today existis
#     if not it'll create the files for this day,
#     then set a new c++ file with the base config
#
# version:
#     1.0: just the harded coded thing
#

# set the variables of the day
day=`date +"%d"`
month=`date +"%m"`
year=`date +"%Y"`

#####################################
# verify if the year exists
# if not exists it'll create
# then open the year file
# if it already exists it'll just
# open it
#####################################
if test -d ./"$year"; then
    cd ./"$year"

    #####################################
    # now it verify if the month exists
    # again, if it exists
    # just cd in it
    # if not, will create the month file
    #####################################

    if test -d ./"$month"; then
        cd ./"$month"

        # do the samething but for the day :P
        if test -d ./"$day"; then
            cd ./"$day"
            >> readme.md
            cp ../../../example_file.cpp 01.cpp
        else
            mkdir ./"$day"
            cd ./"$day"
            >> readme.md
            cp ../../../example_file.cpp 01.cpp
        fi
    else
        mkdir ./"$month"
        cd ./"$month"
            if test -d ./"$day"; then
                cd ./"$day"
                >> readme.md
                cp ../../../example_file.cpp 01.cpp
            else
                mkdir ./"$day"
                cd ./"$day"
                >> readme.md
                cp ../../../example_file.cpp 01.cpp
            fi
    fi
else
    mkdir ./"$year"
    cd ./"$year"

    
    #####################################
    # now it verify if the month exists
    # again, if it exists
    # just cd in it
    # if not, will create the month file
    #####################################

    if test -d ./"$month"; then
        cd ./"$month"

        # do the samething but for the day :P
        if test -d ./"$day"; then
            cd ./"$day"
            >> readme.md
            cp ../../../example_file.cpp 01.cpp
        else
            mkdir ./"$day"
            cd ./"$day"
            >> readme.md
            cp ../../../example_file.cpp 01.cpp
        fi
    else
        mkdir ./"$month"
        cd ./"$month"
        if test -d ./"$day"; then
            cd ./"$day"
            >> readme.md
            cp ../../../example_file.cpp 01.cpp
        else
            mkdir ./"$day"
            cd ./"$day"
            >> readme.md
            cp ../../../example_file.cpp 01.cpp
        fi
    fi
fi