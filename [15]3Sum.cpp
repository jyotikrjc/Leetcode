//Given an array nums of n integers, are there elements a, b, c in nums such tha
//t a + b + c = 0? Find all unique triplets in the array which gives the sum of ze
//ro. 
//
// Notice that the solution set must not contain duplicate triplets. 
//
// 
// Example 1: 
// Input: nums = [-1,0,1,2,-1,-4]
//Output: [[-1,-1,2],[-1,0,1]]
// Example 2: 
// Input: nums = []
//Output: []
// Example 3: 
// Input: nums = [0]
//Output: []
// 
// 
// Constraints: 
//
// 
// 0 <= nums.length <= 3000 
// -105 <= nums[i] <= 105 
// 
// Related Topics Array Two Pointers 
// 👍 7976 👎 875


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> temp;
        if (nums.size()<=2)
            return temp;
        sort(nums.begin(),nums.end());
        for (int i = 0; i <nums.size()-2 ; ++i) {
            int a=nums[i];
            if (a>0) break;
            if (i>0 && a==nums[i-1]) continue;
            for (int j = i+1,k=nums.size()-1; j <k ;) {
                int b = nums[j];
                int c = nums[k];
                int x=a+b+c;
                if (x==0)
                {
                    temp.push_back(vector< int > ({a,b,c})) ;
                    while (j<k && nums[++j]==b) ;
                    while (k>j && nums[--k]==c);
                }
                else if(x<0)
                {
                    j++;
                } else
                {
                    k--;
                }
            }
        }
        return temp;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
