#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n = 8;

    // Inicializo matriz
    int matriz[n][n] =
    {
        {-1, 5, 9, 1, -1, 2, -1, 8},
        {5, -1, -1, -1, -1, -1, -1, 7},
        {9, -1, -1, 13, -1, -1, -1, -1},
        {1, -1, 13, -1, 10, 2, -1, -1},
        {-1, -1, -1, 10, -1, 9, -1, -1},
        {2, -1, -1, 2, 9, -1, 7, 3},
        {-1, -1, -1, -1, -1, 7, -1, 8},
        {8, 7, -1, -1, -1, 3, 8, -1}
    };

    int tabla[n][4];

    for(int i = 0; i < n; i++){
        // Columna de visitados
        tabla[i][0] = 0;
        // Columna de vertices
        tabla[i][1] = i;
        // Columna de arista menos pesada
        tabla[i][2] = -1;
        // Columna de valor de arista menos pesada
        tabla[i][3] = 9999;
    }

    // Vertice en el que se inicializara
    int vAct = 0;
    // Inicializo el peso de la arista del primer Vertice en 0, porque no tiene conexion consigo mismo
    tabla[vAct][3] = 0;
    int visitados = 0;
    int pesoActual = 0;
    int menorPeso;

    do{
        menorPeso = 9999999;
        tabla[vAct][0] = 1;

        for(int i = 0; i < n; i++){
            // Establecer el peso actual
            pesoActual = matriz[vAct][i];

            // Determinar con cuales vertices se tiene conexion y si el peso actual es menor que el ya establecido para cambiar el peso y 'Best' en la tabla
            if(pesoActual >= 0 && pesoActual < tabla[i][3]){
                tabla[i][3] = pesoActual;
                tabla[i][2] = vAct;
            }
        }


        // Ciclo para encontrar el siguiente vertice de menor peso
        for(int i = 0; i < n; i++){
            if(tabla[i][3] < menorPeso && tabla[i][0] != 1){
                menorPeso = tabla[i][3];
                vAct = i;
            }
        }

        visitados++;

    }while(visitados < n-1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cout<<tabla[i][j]<<'\t';
        }
        cout<<'\n';
    }

    int final = 0;

    for(int i = 0; i < n; i++){
        final += tabla[i][3];
    }

    cout<<final;

    return 0;
}
