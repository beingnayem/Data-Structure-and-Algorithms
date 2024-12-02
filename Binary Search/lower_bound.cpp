#include<bits/stdc++.h>
using namespace std;


int Lower_Bound(vector<int> arr, int target){
    int low = 0, high = arr.size();

    while(low < high){
        int mid = low+(high-low)/2;
        if(target <= arr[mid]) high = mid;
        
        else low = mid+1;
    }

    if(low < arr.size() && arr[low] < target) low++;



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

    int LB = Lower_Bound(arr, target);

    if(LB == arr.size()) cout<<target<<" lower bound not found"<<endl;
    else cout<<"Lower bound of "<<target<<" is "<<arr[LB]<<" at index "<<LB<<endl;

    return 0;
}