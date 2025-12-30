class Solution {
    public int subarraySum(int[] nums, int k) {
        int n=nums.length;
        Map<Integer, Integer> m = new HashMap<>();
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k)ans++;
            if(m.get(sum-k)!=null){
                ans+=m.get(sum-k);
            }
            if(m.get(sum)!=null)
                m.put(sum,m.get(sum)+1);
            else
                m.put(sum,1);
        }
        return ans;
    }
}
