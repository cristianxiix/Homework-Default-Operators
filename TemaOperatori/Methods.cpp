#include <iostream>

void Adunare(float f1, float f2)
{
    std::cout << f1 + f2 << std::endl;
}
void Scadere(float f1, float f2)
{
    std::cout << f1 - f2 << std::endl;
}
void Inmultire(float f1, float f2)
{
    std::cout << f1 * f2 << std::endl;
}
void Impartire(float f1, float f2)
{
    std::cout << f1 / f2 << std::endl;
}
void MaiMare(float f1, float f2)
{
    bool x = f1 > f2;
    if (x)
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
}
void MaiMic(float f1, float f2)
{
    bool x = f1 < f2;
    if (x)
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
}
void MaiMareSauEgal(float f1, float f2)
{
    bool x = f1 >= f2;
    if (x)
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
}
void MaiMicSauEgal(float f1, float f2)
{
    bool x = f1 <= f2;
    if (x)
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
}
void EsteEgal(float f1, float f2)
{
    bool x = f1 == f2;
    if (x)
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
}
void NuEsteEgal(float f1, float f2)
{
    bool x = f1 != f2;
    if (x)
    {
        std::cout << "True." << std::endl;
    }
    else
    {
        std::cout << "False." << std::endl;
    }
}
void PreFixareIncrement(float f1, float f2)
{
    int a = 0;
    std::cout << "Pe care dintre numere doriti sa il vedeti Prefixat?" << std::endl;
    std::cout << "introduceti 1 pentru primul, orice cifra pentru al doilea." << std::endl;
    std::cin >> a;
    if (a == 1)
    {
        std::cout << "Numarul devine " << ++f1 << std::endl;
        std::cout << "** printing first number again..\n " << f1;
    }
    else
    {
        std::cout << "Numarul devine " << ++f2 << std::endl;
        std::cout << "** printing second number again..\n " << f2;
    }
}
void PostFixareIncrement(float f1, float f2)
{
    int a = 0;
    std::cout << "Pe care dintre numere doriti sa il vedeti Prefixat?" << std::endl;
    std::cout << "introduceti 1 pentru primul, orice cifra pentru al doilea." << std::endl;
    std::cin >> a;
    if (a == 1)
    {
        std::cout << "Numarul este " << f1++ << std::endl;
        std::cout << "** printing first number again.. " << f1 << std::endl;
    }
    else
    {
        std::cout << "Numarul este " << f2++ << std::endl;
        std::cout << "** printing first number again.. " << f2 << std::endl;
    }
}
void PreFixareDecrement(float f1, float f2)
{
    int a = 0;
    std::cout << "Pe care dintre numere doriti sa il vedeti Prefixat?" << std::endl;
    std::cout << "introduceti 1 pentru primul, orice cifra pentru al doilea." << std::endl;
    std::cin >> a;
    if (a == 1)
    {
        std::cout << "Numarul devine " << --f1 << std::endl;
        std::cout << "** printing first number again..\n " << f1;
    }
    else
    {
        std::cout << "Numarul devine " << --f2 << std::endl;
        std::cout << "** printing second number again..\n " << f2;
    }
}
void PostFixareDecrement(float f1, float f2)
{
    int a = 0;
    std::cout << "Pe care dintre numere doriti sa il vedeti Prefixat?" << std::endl;
    std::cout << "introduceti 1 pentru primul, orice cifra pentru al doilea." << std::endl;
    std::cin >> a;
    if (a == 1)
    {
        std::cout << "Numarul este " << f1-- << std::endl;
        std::cout << "** printing first number again.. " << f1 << std::endl;
    }
    else
    {
        std::cout << "Numarul este " << f2-- << std::endl;
        std::cout << "** printing first number again.. " << f2 << std::endl;
    }
}