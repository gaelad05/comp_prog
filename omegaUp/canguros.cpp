#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int c, n, m;
    char opc;

    queue<int> canguros;

    cin>>c>>n;

    for(int i = 0; i < n; i++){
        cin>>opc;

        if(opc == 'N'){
            cin>>m;
            canguros.push(m);
        }
        else if (opc == 'A'){
            c -= canguros.front();
            c--;
            canguros.pop();
        }
        else if(opc == 'C'){
            cout<<canguros.size()<<'\n';
        }
        else {
            cout<<c<<'\n';
        }
    }

  return 0;
}
