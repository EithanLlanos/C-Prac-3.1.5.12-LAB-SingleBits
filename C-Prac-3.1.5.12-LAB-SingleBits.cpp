//Scenario
//A nibble is just a four - bit aggregation - we can also call it a half - byte.
//Sometimes we use the terms low nibble and high nibble to denote nibbles containing less significant bits(low nibble - L) and more significant bits(high nibble - H) within a byte.
//Write a program that asks the user for one integer number smaller than 256, and prints both nibbles of the number.You don't have to verify the input.
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample input
//255
//
//Expected output
//H nibble : 15
//L nibble : 15
//
//Sample input
//63
//
//Expected output
//H nibble : 3
//L nibble : 15
//
//Sample input
//11
//
//Expected output
//H nibble : 0
//L nibble : 11
//
////////////////////////////////////////////////////////////////////////////////////////////////////




//255 : 1111 1111
//63  : 0011 1111
//11  : 0000 1011

#include <stdio.h>

int main(void) {
	int v,hnib,lnib;
	printf("Enter a number lower than 256: \n");
	scanf_s("%d", &v);
	hnib = (v & 240) >> 4;

//	0000 1111 0000
//	0000 0000 1111

	lnib = v & 15;
	printf("H nibble: %d\n", hnib);
	printf("L nibble: %d\n", lnib);


}

