class Solution {
public:
    void solve(string digit, int index, string output, string mapping[], vector<string>&ans){
        //base case
        if(index>=digit.length()){
            ans.push_back(output);
            return;
        }
      
        
        int value= digit[index]-'0';
        string element= mapping[value];
        
        for(int i=0;i<element.length();i++){
            
        output.push_back(element[i]);
        solve(digit,index+1,output,mapping,ans);
        output.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        int index=0;
        vector<string>ans;
        string output="";
          if(digits.length()==0){
            return ans;
        }
        string mapping[10]={"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,output,mapping,ans);
        return ans;
    }
};