


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums){
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st;

    for(int i = n - 1; i>=0; i--){
        while(!st.empty() && st.top() <= nums[i]){
            st.pop();
        }
        if(!st.empty()){
            res[i] = st.top();
        }
        st.push(nums[i]);
    }
    return res;
}

int main(){
    vector<int> nums = {1, 3, 2, 4};
    vector<int> result = nextGreaterElements(nums);

    for(int r : result){
        cout<< r << " ";
    }
    return 0;
}