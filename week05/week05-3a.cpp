//week05-3a.cpp 學習計畫 Built-In Functions 第1題
// Leetcode 58. Length of Last Word 最後那個字,有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,now=0; //最後答案vs.現在累積字母
        for (char c:s){ //每次逐一出字母檢查
            if(c==' '){ //遇到空格,要清空
                if(now!=0) ans=now; //更新答案
                now=0; //清空
            } else now++; //遇到不是空格,就要+1
        }
        if(now!=0) ans=now; //更新答案
        return ans;
    }
};
