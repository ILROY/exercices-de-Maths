#ifndef MATRICE22_H
#define MATRICE22_H

void sommeMatrices(int a2[2][2], int b2[2][2], int resultat[2][2]);
void soustractionMatrices(int a2[2][2], int b2[2][2], int resultat[2][2]);
void produitMatrices(int a2[2][2], int b2[2][2], int resultat[2][2]);
bool inverseMatrice(int a2[2][2], float resultat[2][2]);
void transposeeMatrice(int a2[2][2], int resultat[2][2]);
int traceMatrice(int a2[2][2]);

#endif