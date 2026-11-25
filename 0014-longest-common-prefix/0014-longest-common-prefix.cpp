class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp = strs[0];
        string ans="";
        for(int i=1; i<strs.size(); i++){
            int j=0;
            while((j<temp.size()&&j<strs[i].size())&&temp[j]==strs[i][j])
            {
                ans.push_back(strs[i][j]);
                j++;
            }
            temp=ans;
            ans.clear();


        }
        return temp;
    }
};