#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

  bool containsDuplicate(vector<int>& nums){
    sort(nums.begin(), nums.end());

    for(int i=1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]){
            return true;
        }
    }
    return false;
  }

int main(){
    vector<int> nums = {1,2,24,56,8,2};
    if(containsDuplicate(nums)){
        cout<<"true (Duplicate exits)"<<endl;    
    }else {
        cout<<"false (All elements are unique)"<<endl;
    }
    return 0;
}