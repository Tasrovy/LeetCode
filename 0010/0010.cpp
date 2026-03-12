class Solution {
    int sSize;
    int pSize;
public:
    bool isMatch(string s, string p) {
        sSize = s.size();
        pSize = p.size();
        return isMatch(s,p,0,0);
    }

    bool isMatch(string& s, string& p,int sIndex,int pIndex){
        if(pIndex==pSize) return sIndex == sSize;

        bool match = sIndex<sSize&&(p[pIndex]==s[sIndex]||p[pIndex]=='.');

        if(pIndex+1<pSize&&p[1+pIndex]=='*') 
            return (match&&isMatch(s,p,sIndex+1,pIndex))||isMatch(s,p,sIndex,pIndex+2);

        else 
            return match&&isMatch(s,p,sIndex+1,pIndex+1);
    }
};