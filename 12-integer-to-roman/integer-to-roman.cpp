class Solution {
public:

    string str(int n){
        if(n == 1) return "I";
        else if(n == 4) return "IV";     
        else if(n == 5) return "V";
        else if(n == 9) return "IX";      
        else if(n == 10) return "X";
        else if(n == 40) return "XL"; 
        else if(n == 50) return "L";
        else if(n == 90) return "XC";    
        else if(n == 100) return "C";
        else if(n == 400) return "CD";
        else if(n == 500) return "D";
        else if(n == 900) return "CM";
        else return "M"; 
    }

    string intToRoman(int num) {
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans = "";

        for(int i = 0; i < values.size(); i++){
            while(num >= values[i]){
                num -= values[i];
                ans += str(values[i]);
            }
        }

        return ans;
    }
};
