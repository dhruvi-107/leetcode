class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) 
    {
        int c,x=0;
        int [] ans=new int[nums.length];
        for(int num : nums)
        {
            c=0;
            for(int i=0;i<nums.length;i++)
            {
                if(num>nums[i])
                {
                    c++;
                }
            }
            ans[x++]=c;
        }
    return ans;
    }
}