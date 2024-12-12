#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=2*i;j++){ 
            if(j%2!=0){
                cout<<"*";
            }else{
                cout<<(i+1);
            }
        }
        cout<<endl;
    }

    n--;

    for(int i=0; i<n; i++){
        for(int j=0; j<2*(n-i)-1;j++){ 
            if(j%2!=0){
                cout<<"*";
            }else{
                cout<<(n-i);
            }
        }
        cout<<endl;
    }

    return 0;
}

