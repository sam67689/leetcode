class Solution {
    public int singleNumber(int[] nums) {
        int singlenum=0;
        for(int num:nums){
            singlenum^=num;
        }
        return singlenum;
    }
}