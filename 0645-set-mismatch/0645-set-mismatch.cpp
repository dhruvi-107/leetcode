class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr(2);
        int n = nums.size();
        vector<int> freq(n + 1, 0);

        for (int num : nums) {
            freq[num]++;
        }

        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) {
                arr[0] = i;
            }
            if (freq[i] == 0) {
                arr[1] = i;
            }
        }

        return arr;
    }
};