class Solution {
public:
    bool isPalindrome(string s) {
        string rev;
		for(int i=0;i<s.size() ; i++){
			if(s[i] >= 'a' && s[i]<='z' || s[i] >= '0' && s[i]<='9') 
                rev+=s[i];
			if(s[i] >= 'A' && s[i]<='Z')
                rev+=(s[i]-'A'+'a');
		}
        int a = rev.size();
		for(int j=0;j<a/2;j++){
			if(rev[j]!=rev[a-j-1])
                return false;
		}
        return true;
        
    }
};
