#include <iostream>
#include "matrice33.h"


void sommeMatrices(int a3[3][3], int b3[3][3], int resultat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultat[i][j] = a3[i][j] + b3[i][j];
        }
    }
}

void soustractionMatrices(int a3[3][3], int b3[3][3], int resultat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultat[i][j] = a3[i][j] - b3[i][j];
        }
    }
}

void produitMatrices(int a3[3][3], int b3[3][3], int resultat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultat[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                resultat[i][j] += a3[i][k] * b3[k][j];
            }
        }
    }
}

bool inverseMatrice(int a3[3][3], float resultat[3][3]) {
    // Calculer le déterminant
    int determinant = a3[0][0]*(a3[1][1]*a3[2][2] - a3[1][2]*a3[2][1]) - 
                      a3[0][1]*(a3[1][0]*a3[2][2] - a3[1][2]*a3[2][0]) + 
                      a3[0][2]*(a3[1][0]*a3[2][1] - a3[1][1]*a3[2][0]);
    
    if (determinant == 0) return false;

    // Calculer la matrice des cofacteurs
    float cof[3][3];
    cof[0][0] = a3[1][1]*a3[2][2] - a3[1][2]*a3[2][1];
    cof[0][1] = -(a3[1][0]*a3[2][2] - a3[1][2]*a3[2][0]);
    cof[0][2] = a3[1][0]*a3[2][1] - a3[1][1]*a3[2][0];
    cof[1][0] = -(a3[0][1]*a3[2][2] - a3[0][2]*a3[2][1]);
    cof[1][1] = a3[0][0]*a3[2][2] - a3[0][2]*a3[2][0];
    cof[1][2] = -(a3[0][0]*a3[2][1] - a3[0][1]*a3[2][0]);
    cof[2][0] = a3[0][1]*a3[1][2] - a3[0][2]*a3[1][1];
    cof[2][1] = -(a3[0][0]*a3[1][2] - a3[0][2]*a3[1][0]);
    cof[2][2] = a3[0][0]*a3[1][1] - a3[0][1]*a3[1][0];

    // Transposer et diviser par le déterminant
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultat[i][j] = cof[j][i] / (float)determinant;
        }
    }

    return true;
}

void transposeeMatrice(int a3[3][3], int resultat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultat[i][j] = a3[j][i];
        }
    }
}

int traceMatrice(int a3[3][3]) {
    return a3[0][0] + a3[1][1] + a3[2][2];
}
