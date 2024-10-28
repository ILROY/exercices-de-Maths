#include <iostream>
#include "matrice22.h"
#include "matrice33.h"

void remplirMatrice2(int matrice[2][2]) {
    std::cout << "Entrez les éléments de la matrice 2x2 (format : a11 a12 a21 a22) : " << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "Element [" << i << "][" << j << "] : ";
            std::cin >> matrice[i][j];
        }
    }
}

void remplirMatrice3(int matrice[3][3]) {
    std::cout << "Entrez les éléments de la matrice 3x3 (format : a11 a12 a13 a21 a22 a23 a31 a32 a33) : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Element [" << i << "][" << j << "] : ";
            std::cin >> matrice[i][j];
        }
    }
}

int main() {
    //demande a l'utilisateur de choisir  une matrice d'ordre 2 ou une matrice d'ordre 3
    int choix;
   std::cout << "choisir entre une matrice d'ordre 2 ou une matrice d'ordre 3" << std::endl << "Entrer 2 pour matrice d'ordre 2 ou 3 pour matrice d'ordre 3" << std::endl;
   std::cin >> choix;
   if(choix !=2 && choix !=3)
   {
    std::cout << "Entrer 2 pour matrice d'ordre 2 ou 3 pour matrice d'ordre 3" << std::endl;
   }
    // Matrice d'ordre 2
    int a2[2][2] = {};
    int b2[2][2] = {};
    int resultat2[2][2];
    float inverse2[2][2];

    // Remplir les matrices 2x2
    std::cout << "Matrice A d'ordre 2 :" << std::endl;
    remplirMatrice2(a2);
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << a2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "Matrice B d'ordre 2 :" << std::endl;
    remplirMatrice2(b2);
        for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << b2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    sommeMatrices(a2, b2, resultat2);
    std::cout << "Somme des matrices d'ordre 2 : " << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << resultat2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    soustractionMatrices(a2, b2, resultat2);
    std::cout << "Soustraction des matrices d'ordre 2 : " << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << resultat2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    produitMatrices(a2, b2, resultat2);
    std::cout << "Produit des matrices d'ordre 2 : " << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << resultat2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    if (inverseMatrice(a2, inverse2)) {
        std::cout << "Inverse de la matrice A d'ordre 2 : " << std::endl;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                std::cout << inverse2[i][j] << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "La matrice A d'ordre 2 n'a pas d'inverse." << std::endl;
    }

    transposeeMatrice(a2, resultat2);
    std::cout << "Transposée de la matrice A d'ordre 2 : " << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << resultat2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Trace de la matrice A d'ordre 2 : " << traceMatrice(a2) << std::endl;

    // Matrice d'ordre 3
    int a3[3][3] = {};
    int b3[3][3] = {};
    int resultat3[3][3];
    float inverse3[3][3];

    // Remplir les matrices 3x3
    std::cout << "Matrice A d'ordre 3 :" << std::endl;
    remplirMatrice3(a3);
     for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << a3[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "Matrice B d'ordre 3 :" << std::endl;
    remplirMatrice3(b3);
     for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << b3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    sommeMatrices(a3, b3, resultat3);
    std::cout << "Somme des matrices d'ordre 3 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << resultat3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    soustractionMatrices(a3, b3, resultat3);
    std::cout << "Soustraction des matrices d'ordre 3 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << resultat3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    produitMatrices(a3, b3, resultat3);
    std::cout << "Produit des matrices d'ordre 3 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << resultat3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    if (inverseMatrice(a3, inverse3)) {
        std::cout << "Inverse de la matrice A d'ordre 3 : " << std::endl;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cout << inverse3[i][j] << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "La matrice A d'ordre 3 n'a pas d'inverse." << std::endl;
    }

    transposeeMatrice(a3, resultat3);
    std::cout << "Transposée de la matrice A d'ordre 3 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << resultat3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

