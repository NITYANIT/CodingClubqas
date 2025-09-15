class Solution {
public:
//brute n**2 tc,run 2 loops.
//better use hashmao and check for the 2nd no in the map everytime , of found then return
//
    vector<int> twoSum(vector<int>& nums, int target) {
        //mpp.find(morenum) != mpp.end() is the standard way to check if a key exists in a C++ map/unordered_map. nlogn and n
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            int morenum=target-num;
            if(mpp.find(morenum)!=mpp.end())
            {
                return {mpp[morenum],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};
// class Solution {
// public:
// //brute n**2 tc,run 2 loops.
// //better use hashmao and check for the 2nd no in the map everytime , of found then return
// //
//     vector<int> twoSum(vector<int>& nums, int target) {
//         //mpp.find(morenum) != mpp.end() is the standard way to check if a key exists in a C++ map/unordered_map. nlogn and n
//         //optiml n+n logn   o(1)

//         sort(nums.begin(),nums.end());
//         int l=0,r=nums.size()-1;
//         vector<int>soln{0};
//        while(l<r)
//         {
//           if(nums[l]+nums[r]==target)
//           {
//             soln.push_back(l);
//             soln.push_back(r);
//             return soln;
//           }
//           else if(nums[l]+nums[r]<target)
//           {
//             r--;
//           }
//           else{
//             l++;
//           }
//           return soln;
//         }
    
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // store number + original index
        vector<pair<int,int>> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        // sort by number
        sort(arr.begin(), arr.end());

        int l = 0, r = arr.size() - 1;
        while (l < r) {
            int sum = arr[l].first + arr[r].first;
            if (sum == target) {
                return {arr[l].second, arr[r].second};
            }
            else if (sum < target) {
                l++; // need bigger sum
            } else {
                r--; // need smaller sum
            }
        }

        return {}; // won't reach (since solution exists)
    }
};
