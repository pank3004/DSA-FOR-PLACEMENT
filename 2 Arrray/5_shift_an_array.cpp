#include<iostream>
using namespace std;

void shiftArray(int arr[], int size, int n){
    int final_shift=n%size;
    if(final_shift==0){
        return;
    }
    // step 1:
    int temp[1000]; 
    int idx=0;
    for(int i=size-final_shift; i<size; i++){
        temp[idx]=arr[i];
        idx++;
    }

    // step 2
    for(int i=size-1; i>=final_shift; i--){
        arr[i]=arr[i-final_shift];
    }

    // step 3
    for(int i=0; i<final_shift; i++){
        arr[i]=temp[i];
    }

}


int main(){
    int arr[]={20,40,30,50,10,60,90,150};
    int size=8;
    int n=2;

    cout<<"before shifting: "; 
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    shiftArray(arr, size, n);

    cout<<"after shifting: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}