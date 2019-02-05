#!/bin/bash

# Variables
TEMP=`mktemp`
DIFF=`mktemp`
SOLUTION="solution"

# Program needs to be executable
if [ ! -x pt ]
then
    echo "Program pt does not exist in current directory or is not executable"
    exit 0
fi

# Mastersolution is not readable
if [ ! -r "$SOLUTION" ] 
then
    echo "Cannot read mastersolution at in file \"$SOLUTION\""
    exit 0
fi

# Extract addresses from alloc calls
./pt | ./dropAddresses > "$TEMP"
# Compare with master solution
diff "$SOLUTION" "$TEMP" 
res=$?

# Match?
if [ $res -eq 0 ]
then
    echo "Solution and implementation match"
    rm "$DIFF"
    rm "$TEMP"
    exit 0
else
    echo "Implementation does not match master solution (return $res)"
    echo "See diff file at $DIFF"
    echo "Your output without alloc addresses is in file: $TEMP"
    exit 1
fi