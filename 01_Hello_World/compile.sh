


fullname=$(basename "$1")
ext="${filename##*.}"
filename="${filename%.*}"

g++ $fullname -o $filename.exe && ./$filename.exe

