#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int m=0;
        for(int j=0; j<=2*i;j++){ 
            if(j==0 || j==2*i){
                cout<<"*";
            }else if(j<=i){
                m++;
                cout<<m;
            }else{
                m--;
                cout<<m;
            }
        }
        cout<<endl;
    }

    n--;

    for(int i=0; i<n; i++){
        int m=0;
        for(int j=0; j<=2*(n-i-1);j++){ 
            if(j==0 || j==2*(n-i-1)){
                cout<<"*";
            }else if(j<=(n-i-1)){
                m++;
                cout<<m;
            }else{
                m--;
                cout<<m;
            }
        }
        cout<<endl;
    }

    return 0;
}

