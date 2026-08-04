class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
       int ref=0;
       int i=1;;
       vector<string>ans;
       while(i!=n+1 && ref!=target.size())
       {
        if(target[ref]==i)
        {
            ans.push_back("Push");
            ref++;
        }
        else
        {
            ans.push_back("Push");
            ans.push_back("Pop");
        }
        i++;
       }
       return ans;
    }
};