class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0) return 0;

        int i=0;
        //skip leading spaces
        while(i<s.length()&&s[i]==' '){
            i++;
        }

        //check sign 
        int sign = 1;
        if (i < s.length() && (s[i] == '+' || s[i] == '-')){
            if(s[i]=='-'){
                sign = -1;
            }
            i++;
        }

        long long num=0;

        //read digits

        while(i<s.length()&&isdigit(s[i])){
            int digit = s[i]-'0';

            if(num>(INT_MAX - digit)/10){
                if(sign == 1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            num = num*10+digit;
            i++;
        }
        return sign * num;

    }
};