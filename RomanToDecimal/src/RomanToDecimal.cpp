//============================================================================
// Name        : RomanToDecimal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void romanToDecimal(void);
void decimalToRoman(void);

int main() {
	int ch=0;
	do{
		std::cout<<"\n1-Roman to Decimal\n2-Decimal to Roman\n3-Exit\nEnter your choice:\n";
		std::cin>>ch;
		switch(ch){
		case 1 : romanToDecimal();
				 break;
		case 2 : decimalToRoman();
				 break;
		case 3 : std::cout<<"\nTerminating program...";
				 break;
		default: std::cout<<"\nInvalid input. Please try again...";
		}
		fflush(stdin);
		std::getchar();
	}while(ch!=3);

	return 0;
}

void romanToDecimal(void){
	std::cout<<"\n\t\tRoman to Decimal:\n\nEnter Roman numeral:\n";


}

void decimalToRoman(void){
	std::cout<<"\n\tDecimal to Roman:\n\n";
}
