#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter value of n: "; 
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<(j+1);
        }
        cout<<endl;
    }
    


    // int n;
    // cout<<"Enter value of n: "; 
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     int k=1;
    //     for(int j=0; j<=i; j++){
    //         cout<<k;
    //         k++;
    //     }
    //     cout<<endl;
    // }


    return 0;
}