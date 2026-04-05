class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
       vector<int>ref;
       int i=1;
       vector<string>ans;
       while(i!=n+1 && ref!=target)
       {
        if(find(target.begin(),target.end(),i)!=target.end())
        {
            ref.push_back(i);
            ans.push_back("Push");
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