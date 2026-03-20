class Solution 
{
    public int[] shuffle(int[] nums, int n) 
    {
        int [] ans=new int[2*n];
        int i,j,k;
        for(i=0,j=n,k=0;i<n;i++,k+=2,j++)
        {
            ans[k]=nums[i];
            ans[k+1]=nums[j];
        }
        return ans;
    }
}