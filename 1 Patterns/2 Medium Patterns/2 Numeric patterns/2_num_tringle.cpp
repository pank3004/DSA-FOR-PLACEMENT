#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "; 
    cin>>n;
    int k=1;
    int m=-1;
    for(int i=0; i<n; i++){
       for(int j=0; j<=i; j++){
        if(j==0){
            m=k;
        }
        cout<<k<<" ";
        k=k-(n-i+j+1);
       }
       k=m+(n-i);
       cout<<endl;
    }
    return 0;
}