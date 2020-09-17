make:
	echo "running make file"
build:
	gcc main.c helpers.c -o  main
run : 
	main.exe
clean :
	del main.exe