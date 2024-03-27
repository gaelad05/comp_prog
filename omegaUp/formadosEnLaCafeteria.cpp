#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;
  
    int n;
    queue<string> alumnos;
    queue<string> profesores;
    string text;

    cin>>n;

    for(int i = 0; i < n; i++){

        cin>>text;

        if(text == "LLEGA"){
            cin>>text;

            if(text == "ALUMNO"){
                cin>>text;
                alumnos.push(text);
            } else {
                cin>>text;
                profesores.push(text);
            }
        } else {
            if(profesores.empty()){
                cout<<alumnos.front()<<'\n';
                alumnos.pop();
            } else {
                cout<<profesores.front()<<'\n';
                profesores.pop();
            }
        }

    }

    return 0;
}
