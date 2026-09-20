class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string word;

        for(char ch:s){
            if(ch == ' '){
                if(!word.empty()){
                    words.push_back(word);
                    word = "";
                }
            }else{
                word+=ch;
            }
        }
        if(!word.empty()){
            words.push_back(word);
            word = "";
        }

        for(int i=0;i<words.size();i++){
            int left =0;
            int right = words[i].size()-1;

            while(left<right){
                swap(words[i][left],words[i][right]);

                left ++;
                right--;
            }
        }
        string ans ;
        for(int i=0;i<words.size();i++){
            ans+=words[i];

            if(i!=words.size()-1){
                ans+=' ';
            }
        }
        return ans;
        
    }
};