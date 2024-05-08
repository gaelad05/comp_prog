#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, m, w = 0;
    bool unico = true;
    string nombre = "", apodo = "";
    cin>>n;

    //int nombres[n];
    vector<string>  apodos;

    for(int i = 0; i < n; i++){
        apodo = "";
        cin>>m;
        for(int j = 0; j < m; j++){
            cin>>nombre;
            apodo += nombre[0];
        }
        apodos.push_back(apodo);
    }

    for(int i = 0; i < n; i++){
        unico = true;

        for(int j = i; j < n; j++){
            if(apodos[i] == apodos[j] && i != j){
                apodos[j] = "";
                unico = false;
            }
            if(apodos[i] == "") unico = false;
        }

        if(unico) w++;

    }

    cout<<w<<'\n';

    return 0;
}
