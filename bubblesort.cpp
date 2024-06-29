/*#include<iostream>
using namespace std;         //Traditional approach
    int main(){
    int i,j,ar[]={5,4,32,6,7,8},size=sizeof(ar)/sizeof(int);//size of array we can also pass size inside []
for (i=0;i<size;i++){
    for(j=i+1;j<size;j++){//size
        if (ar[i]>ar[j]){
        //swaping by using xor binary opertor
        ar[i]=ar[i]^ar[j];
        ar[j]=ar[i]^ar[j];
        ar[i]=ar[i]^ar[j];}}
    cout<<ar[i]<<",";}//printting sorted array 
    return 0;} 


#include<iostream>               //Modern Approach
using namespace std;         
    int main(){
    int i,j,ar[]={5,4,32,6,7,8},size=sizeof(ar)/sizeof(int);//size of array we can also pass size inside []
for (i=0;i<size;i++){
    for(j=0;j<size-i-1;j++){//size
        if (ar[j]>ar[j+1]){
        //swaping by using xor binary opertor
        ar[j]=ar[j]^ar[j+1];
        ar[j+1]=ar[j]^ar[j+1];
        ar[j]=ar[j]^ar[j+1];}}
    cout<<ar[i]<<",";}//printting sorted array 
    return 0;}



    // bubble sort for charecters same logic
#include<iostream>
using namespace std;
int main(){
    char arr[5]={'m','k','h','g','u'};char temp;
    int i,j;
    for (i=0;i<5;i++){
        for(j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;}}    }
    for (i=0;i<5;i++){          \\ without it will show wrong order output
    cout<<arr[i];}
    return 0;}*/


//printing charecter by using ascci number a=97 and A=65
#include<iostream>
using namespace std;
int main(){
cout<<char(97); 
    return 0;}
