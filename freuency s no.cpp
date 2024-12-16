#include<iostream>
using namespace std;
int main (){
    int count=0;
int arr[]={1,2,1,2,3};
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]==arr[j])
        count++;
        arr[j]=-1;
    }
    
}
if(arr[i]!=-1)
cout<<"value of"<<arr[i]<<
}
