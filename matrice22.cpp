#include <iostream>
#include "matrice22.h"

void sommeMatrices(int a2[2][2], int b2[2][2], int resultat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            resultat[i][j] = a2[i][j] + b2[i][j];
        }
    }
}

void soustractionMatrices(int a2[2][2], int b2[2][2], int resultat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            resultat[i][j] = a2[i][j] - b2[i][j];
        }
    }
}

void produitMatrices(int a2[2][2], int b2[2][2], int resultat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            resultat[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                resultat[i][j] += a2[i][j] * b2[j][k];
            }
        }
    }
}

bool inverseMatrice(int a2[2][2], float resultat[2][2]) {
    int determinant = a2[0][0]*a2[1][1] - a2[0][1]*a2[1][0];
    if (determinant == 0) return false;
    
    resultat[0][0] = a2[1][1] / (float)determinant;
    resultat[0][1] = -a2[0][1] / (float)determinant;
    resultat[1][0] = -a2[1][0] / (float)determinant;
    resultat[1][1] = a2[0][0] / (float)determinant;
    
    return true;
}

void transposeeMatrice(int a2[2][2], int resultat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            resultat[i][j] = a2[j][i];
        }
    }
}

int traceMatrice(int a2[2][2]) {
    return a2[0][0] + a2[1][1];
}
