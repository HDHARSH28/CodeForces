#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int r, b;
        cin >> r >> b;
        int bet = r / (b + 1);
        int rest = r % (b + 1);
        int t = bet;
        while (t)
        {
            cout << "R";
            t--;
        }
        if (rest)
        {
            cout << "R";
            rest--;
        }
        while (b)
        {
            int t = bet;
            cout << "B";
            while (t)
            {
                cout << "R";
                t--;
            }
            if (rest)
            {
                cout << "R";
                rest--;
            }
            b--;
        }
        cout << endl;
        
    }
    return 0;
}