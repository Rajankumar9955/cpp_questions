

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSumSorted(const vector<int>& nums, int target){
    int left = 0, right = nums.size() -1;
    while(left < right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            return {left + 1, right + 1};
        }else if(sum<target){
            left++;
        }else{
            right--;
        }
    }
    return {}; 
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target =26;
    vector<int> result = twoSumSorted(nums, target);

    if(!result.empty()){
        cout<<" Indices: "<<result[0]<<" and "<<result[1]<<endl;
    }else{
        cout<<"No two numbers found"<<endl;
    }
    return 0;
}