

#include<iostream>
#include<vector>
using namespace std;

int LengthofLogestSubstring(string s){
    vector<int> freq(128, 0);
    int left = 0, maxLen = 0;

    for(int right = 0; right < s.length(); right++){
        freq[s[right]]++;

        while(freq[s[right]]> 1){
            freq[s[left]]--;
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main(){
    string s = "abcabcbb";
    cout << "Longest substring length: "<<LengthofLogestSubstring(s)<<endl;
    return 0;
}