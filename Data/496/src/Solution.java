import java.util.Stack;
class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer> stack = new Stack<>();
        int number;
        int num[]={0};
        StringBuilder newNum = new StringBuilder();
        for (int i = nums2.length - 1 ; i >= 0 ; i -- ){
            for (int k = 0 ; k < nums1.length ; k ++){
                if (nums1[k]!=nums2[i])
                    stack.push(nums2[i]);
                int topNum = stack.pop();
                if (nums1[k]<topNum) {
                    num[k] = topNum;
                }
                else number = -1;
            }
        }
        return num;
    }
}
