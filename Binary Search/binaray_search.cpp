#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> &arr, int target){
    int l = 0, r = arr.size()-1;
    
    while(l <= r){
        int mid = l + (r-l)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) l = mid+1;
        else r = mid-1;
    }
    return -1;
}


int main(){

    int n; cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    
    int target; cin>>target;
    
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    
    int index = bs(arr, target);
    
    if(index>=0) cout<<target<<" found at index "<<index<<endl;
    else cout<<target<<" not found in the array"<<endl;

    return 0;
}