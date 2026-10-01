// week04-4.cpp 學習計畫 basic 第10題
// leetcode 896. Monotonic Array 「無聊的陣列」
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int red=0,green=0; //紅色往上、綠色往下
        for(int i=0;i<nums.size()-1;i++){ //兩兩相臨，比較
            if(nums[i] < nums[i+1]) red++; //往上
            if(nums[i] > nums[i+1]) green++; //往下
        }
        if(red==0||green==0) return true; //沒有紅色?無聊 沒有綠色?無聊
        return false;
    }
};
