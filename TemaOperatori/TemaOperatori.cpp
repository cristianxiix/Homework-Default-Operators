#include <iostream>
#include "Declarations.h"
#pragma once
enum Metode {
	Default = 0, Adn = 1, Scd = 2, Inm = 3, Impart = 4,
	MMare = 5, MMic = 6, MMareSauEgal = 7, MMicSauEgal = 8, EEgal = 9,
	NuEEgal = 10, PreFixIncrement = 11, PostFixIncrement = 12,
	PreFixDecrement = 13, PostFixDecrement = 14

};

int main() {
	float f1;
	float f2;
	std::cout << "*****PROGRAM OPERATORI*****" << std::endl;
	std::cout << "Please insert first number" << std::endl;
	std::cin >> f1;
	std::cout << "Please insert second number" << std::endl;
	std::cin >> f2;
	std::cout << "Va rugam sa introduceti cifra corespunzatoare operatiei pe care doriti sa o faceti cu cele doua numere" << std::endl;
	std::cout << " 1. Adunare +\n 2. Scadere -\n 3. Inmultire *\n 4. Impartire /\n 5. Mai mare >\n 6. Mai mic <\n";
	std::cout << " 7. Mai mare sau egal >=\n 8. Mai mic sau egal <=\n 9. Este egal == ?\n 10. Prefixare Increment **** ++EX\n";
	std::cout << " 11. Postfixare Increment *** EX++\n 12. PreFixare Decrement *** --EX\n 13. Postfixare Decrement *** EX--\n" << std::endl;
	std::cout << "TO END THE PROGRAM, PRESS 0" << std::endl;
	std::string Wylt = "Pentru alta operatiune, introduceti cifra corespunzatoare, EXIT PRESS 0";
	
	int i = 0;
	jump:
	std::cin >> i;

	switch (i)
{
	default: 
	{
		exit(1);
	}
	case 1:
	{
		Adunare(f1, f2);
		std::cout << Wylt << std::endl;
	}
	case 2: 
	{
	Scadere(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
	case 3: 
		{
		Inmultire(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
		}
	case 4: 
	{
		Impartire(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
		}
	case 5: 
		{
		MaiMare(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
		}
	case 6: 
	{
		MaiMic(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
	case 7: 
	{
		MaiMareSauEgal(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
	case 8: 
	{
		MaiMicSauEgal(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
	case 9: 
	{
		EsteEgal(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
		break;
	}
	case 10:
	{
		NuEsteEgal(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
	case 11:
	{
	    PreFixareIncrement(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
	case 12:
	{
	   PostFixareIncrement(f1, f2);
	   std::cout << Wylt << std::endl;
	   goto jump;
	   break;
	}
	case 13:
	{
		 PreFixareDecrement(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
	case 14:
	{
		PostFixareDecrement(f1, f2);
		std::cout << Wylt << std::endl;
		goto jump;
	}
}

}
