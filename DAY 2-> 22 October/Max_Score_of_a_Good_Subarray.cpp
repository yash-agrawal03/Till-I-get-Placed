/*
Question Link-> https://leetcode.com/problems/maximum-score-of-a-good-subarray/

Approach 1-> Brute Force-
class Solution {
public:
   int find_min(vector<int> &nums,int i,int j)
   {
       int mini=nums[i];
       for(int k=i;k<=j;k++)
       {
           mini=min(mini,nums[k]);
       }
       return mini;
   }
   int maximumScore(vector<int>& nums, int k)
   {
       int n=nums.size();
       int ans=INT_MIN;
       for(int i=0;i<n;i++)
       {
           int mi=nums[i];
           for(int j=n-1;j>=k;j--)
           {
               int min= find_min(nums,i,j);
               ans= max(ans,min*(j-i+1));
           }
       }
       return ans;
   }
};

passed 14 testcases then giving wrong ans
//

*/
/*
Optimal approach-> Greedy
*/
// below sol is written using Github Copilot
class Solution
{
public:
    int maximumScore(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = nums[k];
        int mini = nums[k];
        int i = k;
        int j = k;
        while (i > 0 or j < n - 1)
        {
            if (i == 0)
            {
                j++;
            }
            else if (j == n - 1)
            {
                i--;
            }
            else if (nums[i - 1] > nums[j + 1])
            {
                i--;
            }
            else
            {
                j++;
            }
            mini = min(mini, min(nums[i], nums[j]));
            ans = max(ans, mini * (j - i + 1));
        }
        return ans;
    }
};

// Time Complexity-> O(n)
// Space Complexity-> O(1)