#include<bits/stdc++.h>
using namespace std;


int first_occurence(vector<int> &arr, int target){
    int l = 0, r = arr.size()-1;
    int ans = -1;
    while(l <= r){
        int mid = l+(r-l)/2;
        if(arr[mid] == target){
            ans = mid;
            r = mid-1;
        }
        else if(arr[mid] < target) l = mid+1;
        else r = mid-1;
    }
    return ans;
}


int last_occurence(vector<int> &arr, int target){
    int l = 0, r = arr.size()-1;
    int ans = -1;
    while(l <= r){
        int mid = l+(r-l)/2;
        if(arr[mid] == target){
            ans = mid;
            l = mid+1;
        }
        else if(arr[mid] < target) l = mid+1;
        else r = mid-1;
    }
    return ans;
}


int total_occurence(vector<int> &arr, int target){
    int first = first_occurence(arr, target);
    int last = last_occurence(arr, target);

    if(first == -1) return 0;
    return last-first+1;
}


int main(){
    
    
    int n; cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr.begin(), arr.end());

    int target; cin>>target;
    
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;

    int count = total_occurence(arr, target);

    if(count == -1) cout<<target<<" not found"<<endl;
    else cout<<target<<" total occurence is "<<count<<endl;

    return 0;
}