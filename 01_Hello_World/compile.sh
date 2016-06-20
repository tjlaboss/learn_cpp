# Quick script to compile/execute individual c++ programs


# Grab the last file name
for last; do true; done

fullname=$(basename "$last")
ext="${fullname##*.}"
filename="${fullname%.*}"

g++ $@ -o $filename.exe && ./$filename.exe

