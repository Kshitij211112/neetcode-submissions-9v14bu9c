class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n==1) return 1;

        priority_queue<int, vector<int>, greater<int>>pq;

        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }

        int preNum = pq.top();
        pq.pop();
        int count = 1;
        int maxCount = 1;

        while(pq.size()>0){
            int curr = pq.top();
            pq.pop();
            if(curr == preNum) continue;

            else if(preNum == curr-1){
                count++;
            }
            else{
                maxCount = max(count, maxCount);
                count = 1;
            }
            preNum = curr;
        }
        maxCount = max(count, maxCount);
        return maxCount;
    }
};
