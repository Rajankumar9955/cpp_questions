#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, target;
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;
    
    cout<<"Enter the Arrray size elements:"<<endl;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout<<"Enter the target sum:"<<endl;
    cin >> target;
    
    int r= nums.size();
    int l=0;
    int sum=0;
    while(r>l){
        sum=nums[l] + nums[r];
        if(sum == target){
            cout<<"Indices found: [" <<l<<","<<r<<"]"<<endl;
            return 0;
        }
        else if(sum < target){
            l++;
        
        }
        else{
            r--;
        }
    }
    if (l >= r){
         cout << "No solution found" << endl;
         return 0;
    }
}