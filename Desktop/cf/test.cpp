#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    string t =s;
    reverse(t.begin(),t.end());
    return (s==t);
}
int main(){

    string s;
    cin >> s;
    int n= s.size();
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(s[i]!=s[j]){
                char q=s[i];
                s[i]=s[j];
                if(check(s)){
                    cout <<"y"<< endl;
                    return 0;
                }
                s[i]=q;
            }
        }
    }
    cout << "NO" << endl;
return 0;
}
