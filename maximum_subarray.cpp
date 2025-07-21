// #include <iostream>
// #include <vector>
// using namespace std;

// int maxSubArray(vector<int>& nums, int &start, int &end) {
//     int maxSum = nums[0];
//     int currentSum = nums[0];
//     start = end = 0;
//     int tempStart = 0;

//     for (int i = 1; i < nums.size(); i++) {
//         if (currentSum + nums[i] < nums[i]) {
//             currentSum = nums[i];
//             tempStart = i;  // Start new subarray
//         } else {
//             currentSum += nums[i];
//         }

//         if (currentSum > maxSum) {
//             maxSum = currentSum;
//             start = tempStart;
//             end = i;
//         }
//     }

//     return maxSum;
// }

// int main() {
//     vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

//     int start, end;
//     int maxSum = maxSubArray(nums, start, end);

//     cout << "Maximum Subarray Sum: " << maxSum << endl;
//     cout << "Subarray: [ ";
//     for (int i = start; i <= end; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << "]" << endl;

//     return 0;
// }



#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int>& nums){
    int maxSum = INT_MIN;
    int currentSum = nums[0];

    for(int i=0; i<nums.size(); i++){
        currentSum += nums[i];
        currentSum = max(currentSum, nums[i]);
        maxSum = max(maxSum, currentSum);

    }
    return maxSum;
}
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(nums);
    cout<< "Maximum Subarray sum: "<< result << endl;
    return 0;
}
