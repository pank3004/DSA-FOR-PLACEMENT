// * * * * * *
//  * * * * * 
//   * * * *
//    * * *
//     * *
//      * 




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: "; 
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<(2*n-1); j++){
//             if(j>=i && j<=(2*n-1-i) && (i+j)%2==0){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "; 
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" "; 
        }
        for(int k=0; k<n-i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}