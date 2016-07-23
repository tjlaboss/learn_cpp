# Make a new directory and populate it with the templates


for folder in $@; do
	mkdir $folder
	cp compile.sh norun.sh template.cpp $folder
done

