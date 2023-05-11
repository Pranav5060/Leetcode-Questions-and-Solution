#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        st.push(ch);
        st.pop();
    }
}