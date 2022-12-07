#include <bits/stdc++.h>
using namespace std;
 
vector<int> targetIndices(vector<int>& nums,
                          int val)
{
    int count_less = 0;
    int count_target = 0;
 
   
    for (auto& it : nums) {
        if (it == val)
            count_target++;
        if (it < val)
            count_less++;
    }
 
    vector<int> ans;
    while (count_target--) {
        ans.push_back(count_less++);
    }
    return ans;
}
 
int main()
{
    vector<int> nums{ 1, 2, 5, 2, 3 };
    int val = 2;
    vector<int> ans = targetIndices(nums, val);
 
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
