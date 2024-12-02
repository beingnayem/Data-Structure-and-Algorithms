#include<bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long n) {
    if(n==0){
        return (n*n*n);
    }
    long long sum = sumOfSeries(n-1);
    return sum+=(n*n*n);

}

int main(){
    int n;
    cin>>n;
    cout<<sumOfSeries(n)<<endl;
    return 0;
}