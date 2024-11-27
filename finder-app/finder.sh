#!/bin/bash

filesdir=$1
searchstr=$2


if [ $# -ne 2 ]; then
	echo "Incorrect number of arguments."
	exit 1
fi

if [ ! -d $filesdir ]; then
	echo "Argument 1 is not a directory"
	exit 1
fi

filecnt=$(ls -1 $filesdir | wc -l)
matchcnt=$(grep -r $searchstr $filesdir | wc -l)

echo "The number of files are ${filecnt} and the number of matching lines are ${matchcnt}"
