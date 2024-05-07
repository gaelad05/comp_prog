#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, m, aux;

    cin>>n>>m;

    int matriz[n][m];
    int acomodo[m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>aux;

            matriz[i][j] = aux;
        }
    }

    for(int i = 0; i < m; i++){
        cin>>aux;
        acomodo[i] = aux;
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<matriz[i][acomodo[j]]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
