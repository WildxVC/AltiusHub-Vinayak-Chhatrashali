#include<bits/stdc++.h>

using namespace std;

long long kadane(vector<int> &arr){
    long long maxsum=INT_MIN;
    long long sum = 0;

    int n=arr.size();

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum>maxsum){
            maxsum=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    return maxsum;


}

int main(){
    vector<int> arr;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    long long ans=kadane(arr);
    cout<<"The maximum subarray sum is "<<ans<<endl;

    return 0;
}