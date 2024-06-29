#include<iostream>
using namespace std;
int main(){
    int i,j,arr[5]={1,4,3,2,6};
    for (i=0;i<4;i++){
        for(j=i+1;j<5;j++)
        if(arr[i]>arr[j]){
           arr[i]= arr[i]^arr[j];
           arr[j]= arr[i]^arr[j];
           arr[i]= arr[i]^arr[j];}}
            cout<<"sorted Array: "<<endl;
        for (i=0;i<5;i++){
    cout<<arr[i]<<",";}
    return 0;}