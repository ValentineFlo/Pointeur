// Pointeur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    int a = 41;
    

    int* PointeurA = &a; // 

    std::cout << "La valeur de a " << a << std::endl; // la valeur

    std::cout << "L'adresse de a par référence est : " << &a << std::endl; // adresse mémoire

    std::cout << "L'adresse de a par le pointeur est : " << PointeurA << std::endl; // adresse mémoire

    std::cout << "La valeur stocke par a en passant par le pointeur : " << *PointeurA << std::endl; //déférencement, accéder la valeur du pointeur

    std::cout << "L'adresse du pointeur : " << &PointeurA << std::endl; 


    // pointeur vers un pointeur

    int b = 52;

    std::cout << "La valeur de b : " << b << std::endl; // la valeur

    int *PointeurB = &b; 
    int** PointeurPointeurB = &PointeurB;

    std::cout << "L adresses pointer par le pointeur du pointeur de b : " << PointeurPointeurB << std::endl; // la valeur

    // Adresse du pointeur de b :
    std::cout << "L'adresse du pointeur b : " << &PointeurB << std::endl;
    std::cout << "L'adresse du pointeur b : " << *PointeurPointeurB << std::endl;


    std::cout << "valeur du pointeur du pointeur de b : " << **PointeurPointeurB << std::endl; // la valeur
    

}


// objets contient adresse mémoire d'un autre objet
// pointeur fait 4 octets ou 8 si on est à 64 bits