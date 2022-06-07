#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> arr;
class Solution
{
    public:
    int search(vector <int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        if (target<nums[0]||nums.size()<1)
        {
            return 1;
        }
        else if(target>nums[nums.size()-1])
        {
            return nums.size()+1;
        }
        else
        {
            while(left<right)
            {
                int mid = (left+right)/2;
                if(nums[mid]<target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid;
                }
            }
            return right+1;
        }
        
    }
};
int main()
{
    int n;
    cin>>n;
    int temp;
    for(int i = 0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int t;
    cin>>t;
    Solution s;
    int rs;
    rs = s.search(arr,t);
    cout<<rs;
    return 0;
}