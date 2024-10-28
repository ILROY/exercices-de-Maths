#ifndef MATRICE33_H
#define MATRICE33_H

void sommeMatrices(int a3[3][3], int b3[3][3], int resultat[3][3]);
void soustractionMatrices(int a3[3][3], int b3[3][3], int resultat[3][3]);
void produitMatrices(int a3[3][3], int b3[3][3], int resultat[3][3]);
bool inverseMatrice(int a3[3][3], float resultat[3][3]);
void transposeeMatrice(int a3[3][3], int resultat[3][3]);
int traceMatrice(int a3[3][3]);

#endif