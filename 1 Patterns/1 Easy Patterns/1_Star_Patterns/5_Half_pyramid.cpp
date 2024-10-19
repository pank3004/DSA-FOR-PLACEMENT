// *  
// *  *         
// *  *  *
// *  *  *  *

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter l: ";
    cin>>l;

    

    for(int i=0; i<l; i++){
        for(int j=0; j<i+1; j++){
           cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}