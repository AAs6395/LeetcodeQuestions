#include<iostream>
#include<vector>
#include <map>              
using namespace std;
int mazorityelemnt(vector<int> &arr){
int n=arr.size();
map<int,int>mpp;
for(int i=0;i<n;i++){
mpp[arr[i]]++;
}
for(auto it:mpp){
    if(it.second>n/2){
        return it.first;
    }
}
return -1;
}
int main(){
    vector<int> arr={2,2,1,1,1,1,1,2,2};
    int ans=mazorityelemnt(arr);
    cout<<"Mazority element: "<<ans<<endl;
    return 0;
}
