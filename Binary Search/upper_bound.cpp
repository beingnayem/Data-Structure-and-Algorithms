#include<bits/stdc++.h>
using namespace std;


int Upper_Bound(vector<int> arr, int target){
    int low = 0, high = arr.size();

    while(low < high){
        int mid = low+(high-low)/2;
        
        if(target >= arr[mid]) low = mid+1;
        
        else high = mid;

    }

    if(low < arr.size() && arr[low] <= target) low++;

    return low;

}


int main(){
    
    
    int n; cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];


    sort(arr.begin(), arr.end());

    int target; cin>>target;
    
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;

    int UB = Upper_Bound(arr, target);

    if(UB == arr.size()) cout<<target<<" upper bound not found"<<endl;
    else cout<<"Upper bound of "<<target<<" is "<<arr[UB]<<" at index "<<UB<<endl;

    return 0;
}