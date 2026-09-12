#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, c;
    cin >> n >> k >> c;

    vector<int> t(n), s(n);
    vector<bool> underCap(n, false);
    unordered_map<int,int> cnt;
    int M = 0;

    for(int i = 0; i < n; i++){
        cin >> t[i] >> s[i];
        if(cnt[s[i]] < c){
            underCap[i] = true;
            cnt[s[i]]++;
            M++;
        }
    }

    if(M >= k){
        int printed = 0;
        for(int i = 0; i < n && printed < k; i++){
            if(underCap[i]){
                cout << t[i] << "\n";
                printed++;
            }
        }
    } else {
        int need = k - M;
        vector<bool> selected = underCap;
        for(int i = 0; i < n && need > 0; i++){
            if(!underCap[i]){
                selected[i] = true;
                need--;
            }
        }
        for(int i = 0; i < n; i++){
            if(selected[i]){
                cout << t[i] << "\n";
            }
        }
    }

    return 0;
}