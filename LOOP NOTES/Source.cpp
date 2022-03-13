/*
	Loop - section of code that is executed more than once

	by now we are all sick of coping and pasting the same
	section of code over and over

	eg 100 groceries

	stupid to copy the code to appear 100 times

	instead, we will write the cod once and tell the computer
	to execute that code 100 times.

	C and C++ have three looping statement:
		while - indeterministic, entrance-controlled
		do - indeterministic, exit-controlled
		for - deterministic or indeterministic, entrance-controlled

	Always pick the right loop for the problem that you need to solve

	2 characteristics of loops:

	a. deterministic        OR		 indeterministic
	   number of times to			 number of times to do
	   do the loop is known			 the loop is unknown

	   eg sum and average			 eg sumd and avg until the	
			10 numbers				 user enters the value -999

	   process 4 groceries			 process the groceries until the
									 user enters a name of ZZZ

									 -999 and ZZZ are called flags
									 flag - signal to end the loop

									 flags are ONLY USED with 
									 indeterminate loops
									 
									 NEVER PROCESS THE FLAG
									 eg 2, 3, 4, -999
									 the sum is 9 NOT -990

									 "READ CHECK PROCESS READ CHECK
									 PROCESS READ CHECK PROCESS..."

	b. Entrance-Controlled      OR      Exit-Controlled
	   test to do the loop is			test to do the loop is
	   at the top						at the bottom

	   condition to do the loop			{
	   {									.
			.								. loop body
			. loop body						.
			.							}
	   }								condition to do loop again

	   loop body - statements
	   inside the loop

	   Entrance-Controlled Loop are done 0 or more times
	   Exit-Controlled Loops are done 1 or more times

	   We do not want any infinite loops
			use ctrl c to stop the program or hit the x on the
			output screen if you have an infinite loop.
*/