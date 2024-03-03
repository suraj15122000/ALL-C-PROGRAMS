#include <iostream>
#include <bits/stdc++.h>
# include<algorithm>
void SecondElement(int arr[],int n){
    
    sort(arr,arr + n);

   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // int ans1=0;
    // int ans2=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>ans1){
    //         ans1=arr[i];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]>ans2 && arr[i]<ans1){
    //         ans2=arr[i];
    //     }
    // }
    // return ans2;
}
using namespace std;
int main(){
    int arr[5]={2,5,3,9,4};
    SecondElement(arr,5);
    //sort(arr,arr+5);
//    // for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
}

