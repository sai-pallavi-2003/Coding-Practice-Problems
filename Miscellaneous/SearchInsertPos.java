/*Given a sorted array of distinct integers and a target value, 
return the index if the target is found. If not, return the index where it would be if it were inserted in order.*/

class Solution {
    public int searchInsert(int[] nums, int target) {
        int i;
        for(i=0;i<nums.length;i++){
            if(nums[i]==target){
                return i;
            } 
            else{
                while(target<nums[i]){
                    if(nums[i]>target){
                        return i;
                    }
                }
            }
        }
        return i;
        
    }
}
