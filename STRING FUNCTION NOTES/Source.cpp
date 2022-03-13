/*
	String Functions (in string.h)

	Need string fucntions to assign strings, compare strings etc.

	I cannot do:

		name1 = name2
		if (name1 > name2)

	1. strcpy(a, b);	string copy
						assign string b to string a

		eg suppose b is "Joe Blow"
		strcpy(a, b);	set string a to the value "Joe Blow"

	2. strncp(a, b, n);	assign the first n chars of string b
						to string a

		eg suppose b is "joe Blow"
		strncp(a, b, 3);	set string a to the value of "Joe"

	3. concatenation - join together two strings
	eg the concatenation of "Joe" and "Blow" is "JoeBlow"

	strcat(a, b);	concatenate string b to the end of string a
	eg suppose a is "Joe" and b is "Blow"
		strcat(a, b);	change string a to "JoeBlow"

	4. strncat(a, b, n);	concatenate the first n chars of 
							string b to the end of string a

		eg suppose a is "Joe" and b is "Blow"
			strncat(a, b, 2);	changes string a to "JoeBl"

	5. strcmp(a, b)	string compare

	strings are compared based on ASCII (or alphabetical) order
	later in the alphabet, the greater

		eg "SETH" > "BRENT"
			"HOCHWALD" < "MONTE"
			"bozo" < "stupid"
			"SETH" > "SANJAI"

	lower case letters have larger values than upper case letters

		eg "seth" > "SETH"

		strcmp(a, b)
			returns 0 if string a = string b
			returns positive int if string a > string b
			returns negative int if string a < string b

		eg if(strcmp(a, b) == 0)
			printf("The two strings are equal\n");

	6. strncmp(a, b, n) same deal as strcmp but only compare
	the first n chars of each string

	eg if(strncmp(a, b, 5) == 0)
			printf("First five chars are the same\n");

	7. strlen(a) string length
	returns the length of the string a

	eg suppose a is "Seth"
	length = strlen(a); set length to 4

	char names[5][10]; // 5 strings each length 9 + NULL


*/