/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Properties of XOR operation:
XOR of two distinct numbers is 1.
XOR of any number, a and 0 is a.
XOR of a and a is 0.
*/
 
class Solution {
    public int singleNumber(int[] nums) {
        int res=0;
        for (int i=0;i<nums.length;i++){
            res=res^nums[i];
        }
        return res;
        
    }
}
  
