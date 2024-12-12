// Enter the value of n: 5
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "; 
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }

        for(int k=0; k<i+1; k++){
            if(i==0 || k==0 || k==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }

        }

        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" "; 
        }
        for(int k=0; k<n-i; k++){
            if(i==n-1 || k==0 || k==n-i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}



                            // my method
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<2*n-1; j++){
//             if(j==(n-i-1) || j==(n+i-1)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
        
//     }

//      for(int i=0; i<n; i++){
//         for(int j=0; j<2*n-1; j++){
//             if(j==i || j==(2*n-i-2)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
        
//     }

  
// }