#include<bits/stdc++.h>

using namespace std;

void rotate_array(vector<int> &arr,int d){
    int n=arr.size();

    d=d%n;

    reverse(arr.begin(),arr.begin()+ d);

    reverse(arr.begin()+d,arr.end());

    reverse(arr.begin(),arr.end());
}

int main(){
    vector<int> arr;

    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int d;
    cout<<"Enter the positions you want to rotate the array by";
    cin>>d;

    rotate_array(arr,d);

    cout<<"The array after rotation by d places is:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}