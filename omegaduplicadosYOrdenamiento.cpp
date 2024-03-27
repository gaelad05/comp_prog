#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;
    int n, m;
    bool imprime = true;

    cin>>n;

    vector<int> nums;

    for(int i = 0; i < n; i++){
        cin>>m;
        nums.push_back(m);
        if(m < 0 && imprime != false) imprime = false;
    }

    sort(nums.begin(), nums.end());

    cout<<nums[0]<<'\n';


    if(imprime){
        for(int i = 1; i < n; i++){
            if(nums[i - 1] != nums[i]){
                cout<<nums[i]<<'\n';
            }
        }
    }

    return 0;
}
