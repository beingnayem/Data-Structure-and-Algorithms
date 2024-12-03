#include<bits/stdc++.h>
using namespace std;

vector<int> neg_counting_sort(vector<int> &arr){
    int n = arr.size(), min_ele = *min_element(arr.begin(), arr.end());
    
    for(int i=0; i<n; i++) arr[i] += abs(min_ele);
   
    int max_ele = *max_element(arr.begin(), arr.end());
    
    vector<int> freq(max_ele+1, 0);
   
    for(int i=0; i<n; i++) freq[arr[i]]++;
    for(int i=1; i<=max_ele; i++) freq[i] += freq[i-1];
   
    vector<int> output(n);
    
    for(int i=n-1; i>=0; i--){
        output[freq[arr[i]]-1] = arr[i]-abs(min_ele);
        freq[arr[i]]--;
    }
    return output;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<int> output = neg_counting_sort(arr);
    for(int i=0; i<n; i++) cout<<output[i]<<" ";
    cout<<endl;

    return 0; 
}