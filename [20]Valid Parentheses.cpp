//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']
//', determine if the input string is valid. 
//
// An input string is valid if: 
//
// 
// Open brackets must be closed by the same type of brackets. 
// Open brackets must be closed in the correct order. 
// 
//
// 
// Example 1: 
//
// 
//Input: s = "()"
//Output: true
// 
//
// Example 2: 
//
// 
//Input: s = "()[]{}"
//Output: true
// 
//
// Example 3: 
//
// 
//Input: s = "(]"
//Output: false
// 
//
// Example 4: 
//
// 
//Input: s = "([)]"
//Output: false
// 
//
// Example 5: 
//
// 
//Input: s = "{[]}"
//Output: true
// 
//
// 
// Constraints: 
//
// 
// 1 <= s.length <= 104 
// s consists of parentheses only '()[]{}'. 
// 
// Related Topics String Stack 
// 👍 5614 👎 235
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i]=='(' ||s[i]=='{' ||s[i]=='[' )
                stack.push(s[i]);
            else
            {
                if (stack.empty())
                    return false;
                else
                {
                    if (s[i]=='}' && stack.top()=='{' )
                        stack.pop();
                    else if (s[i]==']' && stack.top()=='[' )
                        stack.pop();
                    else if (s[i]==')' && stack.top()=='(' )
                        stack.pop();
                    else
                        return false;
                }
            }
        }
        return stack.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)
