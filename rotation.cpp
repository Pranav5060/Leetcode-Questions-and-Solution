#include<iostream>
using namespace std;

void Swap(int arr[],int A,int B,int d){
        for(int i=A;i<d;i++){
            int temp=arr[A+i];
            arr[A+i]=arr[B+i];
            arr[B+i]=temp;
        }
    }
void rotate(int arr[],int i,int d,int n){
    
    if(d==0 || d==n){
        return ;
    }
    if(d==n-d){
        Swap(arr,i,n-d+i,n-d);
    }
    if(d>n-d){
        Swap(arr,i,d,n-d);
        rotate(arr,n-d+i,2*d-n,d);
    }
    else if(d<n-d){
        Swap(arr,i,n-d,d);
        rotate(arr,i,d,n-d);
    }


}

int main(){
    int n=8;
    int d=3;
    int arr[]={1,2,3,4,5,6,7,8};
    int i=0;
    
    rotate(arr,i,d,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}