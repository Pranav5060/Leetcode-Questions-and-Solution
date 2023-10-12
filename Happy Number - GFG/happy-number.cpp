//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int number(int n){
         int sum=0;
        while(n>0){
            int r=n%10;
            n=n/10;
            sum=sum+pow(r,2);
        }
        return sum;
    }
    int isHappy(int n) {
        unordered_set<int>s;
        while(n!=1 && !s.count(n)){
            s.insert(n);
            n=number(n);
        }
        if(n==1){
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends