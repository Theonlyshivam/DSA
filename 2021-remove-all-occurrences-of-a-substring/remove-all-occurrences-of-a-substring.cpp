class Solution {
public:
    string removeOccurrences(string s, string part) {
        //- find and erase using str.find ->which gives the very first occurence os the substring , then str.erase()->removes the occurence

        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        } 

        return s;
    }
};