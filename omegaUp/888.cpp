#include <iostream>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    long long int t, n, m;
    long long int i;

    scanf("%lld", &t);

    while(t--){
        scanf("%lld", &n);

        m = 1;

        i = n/2;

        m += 2*i + 3*i;

        if(n & 1){
            printf("%lld92\n", m);
        } else{
            m -= 2;
            printf("%lld42\n", m);
        }

    }

    return 0;
}
