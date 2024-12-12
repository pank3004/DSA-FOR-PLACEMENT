// *  
// *  *         
// *     *
// *        *
// *  *  *  *  *

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter l: ";
    cin>>l;

    

    for(int i=0; i<l; i++){
        for(int j=0; j<i+1; j++){
           if(j==0 || i==l-1 || (i==j)){
            cout<<"* ";
           }else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }
    return 0;
}