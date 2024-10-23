class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        int size = strs.length;
        int groupNum = -1;
        HashMap<String,Integer> map = new HashMap<>();
        List<List<String>> result = new ArrayList<>();

        for (String str : strs) {
            String sorted = sortString(str);
            if (!map.containsKey(sorted)) map.put(sorted, ++groupNum);
        }

        for (int i = 0; i <= groupNum; i++) {
            result.add(new ArrayList<>());
        }

        for (String str : strs) {
            String sorted = sortString(str);
            result.get(map.get(sorted)).add(str);
        }
        return result;
    }
    private static String sortString(String text) {
        char[] chars = text.toCharArray();

        Arrays.sort(chars);
        return new String(chars);
    }
}