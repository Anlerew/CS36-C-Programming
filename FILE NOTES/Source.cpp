/*
	Files

	1. Header Files - a collection of fucntions that you can include
	in any program. There are system header files like stdio.h and
	you can write your own. Advantage - reusuable code for faster
	software development.

	Data Files
	2. Text Files
	3. Binary Files

	By now you have to be sick and tired of typing in the input data
	everytime you run a program. Instead, we will type the data in
	only once and save it to a data file. We can then instruct our
	programs to read the data from a data file instead of from the
	keyboard.

	3 steps for working with data files

	1. open the file for input or output (or append)

	computer ---------------------------------> flash drive		output
	computer <--------------------------------- flash drive		input

	append - add to the end of a file

	file modes: "rt" or "tr" or "r" read from a text file
									(input from a text file)
				"wt" or "tw" or "w" write to a text file
									(output to a text file)
				"rb" or "br" input or read from a binary file
				"wb" or "bw" output or write to a binary file

	2. work with the file (save or retrieve the data)
	3. close the file
	MAKE REALLY SURE TO CLOSE THE FILE!

	(When you close the file, you are putting the end of file marker
	on the file)

	When you open an existing file for output, the file is WIPED OUT!

	The text file commands for C are based on printf, scanf, gets_s
	
	For text files, the commands will be fprintf, fscanf, fgets_s

	Advantage for a text file:	can view the file in any editor

	Disadvantages of a text file:	can save only one data at a time
					must format the file (put the white space in)

	Advantage of a binary file:	you can save and retrieve the whole
			array of structs in one line of code

	Disadvantage of a binary file: you cannot view the file

	The binary file commands for C are fwrite and fread

*/