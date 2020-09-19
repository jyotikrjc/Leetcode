//Given an array of size n, find the majority element. The majority element is t
//he element that appears more than ⌊ n/2 ⌋ times. 
//
// You may assume that the array is non-empty and the majority element always ex
//ist in the array. 
//
// Example 1: 
//
// 
//Input: [3,2,3]
//Output: 3 
//
// Example 2: 
//
// 
//Input: [2,2,1,1,1,2,2]
//Output: 2
// 
// Related Topics Array Divide and Conquer Bit Manipulation 
// 👍 3631 👎 230


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map;
        for (int i = 0; i <nums.size() ; ++i) {
            map[nums[i]]++;
        }
        int maxi=INT_MIN,elem=0;
        for (auto i = map.begin(); i != map.end() ; ++i) {
            if (i->second>maxi)
            {
                maxi=i->second;
                elem=i->first;
            }
        }
        return elem;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
