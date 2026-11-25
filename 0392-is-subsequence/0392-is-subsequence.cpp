class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int length = s.size();
        int count =0;
        while(i<s.size() && j<t.size()){
            if(s[i] == t[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(count == length){
            return true;
        }
        return false;
    }
}; 