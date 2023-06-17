// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
int main() {
    // Write C++ code here
    int n=1010011;
    vector<int>num;
    while(n>0){
        int r=n%10;
        n=n/10;
        num.push_back(r);
    }
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<num.size();i++){
        if(num[i]==1){
            cnt1++;
        }
        else if(num[i]==0){
            cnt2++;
        }
    }
    for(int i=0;i<cnt1;i++){
        cout<<"1";
    }
    for(int i=0;i<cnt2;i++){
        cout<<"0";
    }
    
    return 0;
}