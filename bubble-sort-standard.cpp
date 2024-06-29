#include<iostream>
using namespace std;
int main(){
    int i,j,arr[5]={1,41,31,2,6};
    for (i=0;i<4;i++){
        for(j=0;j<4-i;j++)
        if(arr[j]>arr[j+1]){
           arr[j]= arr[j]^arr[j+1];
           arr[j+1]= arr[j]^arr[j+1];
           arr[j]= arr[j]^arr[j+1];}}
            cout<<"sorted Array: "<<endl;
        for (i=0;i<5;i++){
    cout<<arr[i]<<",";}
    return 0;}