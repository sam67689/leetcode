class Solution {
    public int singleNumber(int[] nums) {
        int length = nums.length;
        Set<Integer> hashset = new HashSet<>();
        
        for (int i = 0; i < length; i++) {
            if (!hashset.add(nums[i])) hashset.remove(nums[i]);
        }
        
        Iterator<Integer> iterator = hashset.iterator();
        if (iterator.hasNext()) {
            return iterator.next();
        }
        return -1;
    }
}