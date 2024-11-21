// Enter the value of n: 5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    n--;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        for(int k=0; k<n-i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}