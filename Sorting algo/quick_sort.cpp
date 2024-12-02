#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr, int l, int r){
    int pivot = arr[l];
    int i=l, j=r;
   
    while(i < j){
        while(arr[i] <= pivot && i <= r) i++;
        while(arr[j] > pivot && j >= l) j--;

        if(i < j) swap(arr[i], arr[j]);
    }

    swap(arr[l], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int l, int r){
    
    if(l < r){
        int pivot = partition(arr, l, r);
        quick_sort(arr, l, pivot-1);
        quick_sort(arr, pivot+1, r);
    }
}

int main(){

    int n; cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)  cin>>arr[i];

    quick_sort(arr, 0, n-1);

    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}