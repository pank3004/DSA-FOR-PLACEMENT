#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "; 
    cin>>n;
    int k=0;
    for(int i=0; i<n; i++){
       for(int j=0; j<=i; j++){
        if(i%2==0){
            if(j==0){k=k+i+1;}
            cout<<k<<" ";
        }
        else{
            if(j==0){k=k+i;}
            cout<<k<<" ";
            k=k-2;
        }
        k++;
        
    }
    cout<<endl;
}
    return 0;

}