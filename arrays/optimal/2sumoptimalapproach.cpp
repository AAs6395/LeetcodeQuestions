
#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twosum(int n,vector<int> &arr,int target){
  unordered_map<int,int>mpp;
  for(int i=0;i<n;i++){
    int num=arr[i];
    int more=target-num;
    if(mpp.find(more)!=mpp.end()){
        return {mpp[more],i};
    }
    mpp[num]=i;
  }
return{-1,-1};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twosum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}