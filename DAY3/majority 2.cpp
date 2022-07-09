class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> m;
        
        //sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++) m[nums[i]]++;
        for(auto &it:m){
            if(it.second>(n/3)) ans.push_back(it.first);
        }
        return ans;
    }
};
