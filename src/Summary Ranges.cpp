class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;
        char buf[20];
        if (nums.size() == 0)   return s;
        int sta = 0, end = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]+1) {
                end = i - 1;
                sprintf(buf, "%d", nums[sta]);
                string str = buf;
                if (end != sta) {
                    str += "->";
                    sprintf(buf, "%d", nums[end]);
                    str += buf;
                }
                s.push_back(str);
                sta = end = i;
            }
            else    end++;
        }
        end = nums.size() - 1;
        sprintf(buf, "%d", nums[sta]);
        string str = buf;
        if (end != sta) {
            str += "->";
            sprintf(buf, "%d", nums[end]);
            str += buf;
        }
        s.push_back(str);
        return s;
    }
};
