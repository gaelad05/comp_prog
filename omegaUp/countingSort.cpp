#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    FastIO;

    int n, a;
    cin>>n;

    vector<int> nums;

    for(int i = 0; i < n; i++){
        cin>>a;
        nums.push_back(a);
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        cout<<nums[i]<<' ';
    }

    a = 0;
    cout<<'\n';

    for(int i = 0; i < n; i++){
        if(nums[i] == nums[i-1] && i > 0){
            cout<<a<<' ';
        } else {
            cout<<i<<' ';
            a = i;
        }
    }

    return 0;
}
