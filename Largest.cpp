// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<stack>
int main() {
    bool flg;
    int n;
    cin>>n;
    int temp=n;
    stack<int>st;
    while(temp>0){
        int r=temp%10;
        temp=temp/10;
        st.push(r);
    }
    int m=st.top();
    st.pop();
    while(!st.empty()){
        if(m<st.top()){
            flg=false;
            break;
        }
        flg=true;
        st.pop();
    }
    if(flg){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}