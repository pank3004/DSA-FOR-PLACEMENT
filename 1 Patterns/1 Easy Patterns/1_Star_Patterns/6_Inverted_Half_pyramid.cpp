// *  *  *  *  
// *  *  *      
// *  *
// * 
#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter l: ";
    cin>>l;


    for(int i=0; i<l; i++){
        for(int j=0; j<l-i; j++){
           cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}