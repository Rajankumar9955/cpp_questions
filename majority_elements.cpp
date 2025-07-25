

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>&nums){
    int count = 0;
    int candidate = 0;
    for(int num: nums){
        if(count == 0){
            candidate = num;
        }
        if(num == candidate){
            count++;
        }else{
            count--;
        }
    }
    return candidate;
}

int main(){
    vector<int> nums = {2,2,1,1,1,1,2,2,2};
    int result = majorityElement(nums);

    cout<<"majority Element: "<<result<<endl;
    return 0;
}