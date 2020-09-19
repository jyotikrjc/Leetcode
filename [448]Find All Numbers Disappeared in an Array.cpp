//Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elemen
//ts appear twice and others appear once. 
//
// Find all the elements of [1, n] inclusive that do not appear in this array. 
//
// Could you do it without extra space and in O(n) runtime? You may assume the r
//eturned list does not count as extra space. 
//
// Example:
// 
//Input:
//[4,3,2,7,8,2,3,1]
//
//Output:
//[5,6]
// 
// Related Topics Array 
// 👍 3202 👎 260


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> map;
        for (int i = 0; i < nums.size() ; ++i) {
            map[nums[i]]+=1;
        }
        vector<int> numsi;
        for (int i = 1; i <=nums.size() ; ++i) {
            if (map[i]<1)
                numsi.push_back(i);
        }
        return numsi;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
