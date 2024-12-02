#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_indx=i;
        for(int j=i+1; j<n; j++)    if(arr[j]<arr[min_indx])    min_indx=j;
        if(min_indx != i){
            int temp=arr[i];
            arr[i]=arr[min_indx];
            arr[min_indx]=temp;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  cin>>arr[i];

    selection_sort(arr, n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}