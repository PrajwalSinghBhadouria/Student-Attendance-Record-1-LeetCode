class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A'){
                count++;
            }
            if(count>1){
                return false;
            }
        }
        int m = INT_MIN;
        int c=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='L'){
                c++;
            }
            else{
                m = max(c,m);
                if(m>=3){
                    return false;

                }
                c=0;
                
            }
        }
        if(c>=3){
            return false;
        }
        return true;
    }
};
