// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    string s="23GF";
    int cnt=0;
    int res=0;
    for(int i=s.length()-1;i>=0;i--){
        char c=s[i];
        if(isdigit(c)){
            int n1=c - '0';
            res=res+n1*pow(17,cnt);
            cnt++;
        }
        if(c=='A'){
        res=res+10*pow(17,cnt);
        cnt++;
        }
        if(c=='B'){
        res=res+11*pow(17,cnt);
        cnt++;
        }
        if(c=='C'){
        res=res+12*pow(17,cnt);
        cnt++;
        }
        if(c=='D'){
        res=res+13*pow(17,cnt);
        cnt++;
        }
        if(c=='E'){
        res=res+14*pow(17,cnt);
        cnt++;
        }
        if(c=='F'){
        res=res+15*pow(17,cnt);
        cnt++;
        }
        if(c=='G'){
        res=res+16*pow(17,cnt);
        cnt++;
        }
    }
    cout<<res;

    return 0;
}