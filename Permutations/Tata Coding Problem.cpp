#include<bits/stdc++.h>
using namespace std;

bool excludethis(string &str, char exclude){
    return !str.empty() && str[0] == exclude;
}

int main() {
    string str = "ab3";
    char exclude = '3';
    sort(str.begin(), str.end());
    
    do{
        if(!excludethis(str,exclude)){
            cout<<str<<endl;
        }
    }while(next_permutation(str.begin(), str.end()));
    
    return 0;
}
