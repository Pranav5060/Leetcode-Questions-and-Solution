#include <iostream>
using namespace std;
#include<unordered_map>

int main()
{
    string s1="foo";
    string s2="bar";
    unordered_map<char,char> mp;
    for(int i=0;i<s1.length();i++){
        mp[s1[i]]=s2[i];
        
    }
    for(int i=0;i<s1.length();i++){
        if(mp[s1[i]]!=s2[i]){
            cout<<"No";
        }
        else{
            cout<<"yes";
        }
    }

    return 0;
}
