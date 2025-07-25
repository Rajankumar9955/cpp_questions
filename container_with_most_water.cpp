


#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height){
    int maxArea = 0;
    int left =0, right = height.size()-1;

    while(left < right){
        int h = min(height[left], height[right]);
        int w = right - left;
        maxArea = max(maxArea, h * w);

        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxArea;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<< "Max area: " << maxArea(height)<<endl;
    return 0;
}