class Solution {
    bool isLower(char c){
        return (c>=97 && c<=122);
    }
    public:
    bool detectCapitalUse(string word) {
        char first = word[0];
        for(int i =1;i<word.length();i++){
            if(!isLower(word[i])){
                if(isLower(word[i-1])){
                    return false;
                }
            }
            if(!isLower(word[i-1]) && (i-1) > 0){
                if(isLower(word[i])){
                    return false;
                }
            }
        }
        return true;
    }
};