class Solution {
public:
    bool isPowerOfTwo(int n) {
if(n<=0) return false;
        int cnt=0;
        //by right shift
        while(n>0){
            if((n&1)!=0) {
                cnt++;
            }
            n=n>>1;
            }
        if(cnt==1) return true;
        else return false;
    }
};
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) 
        return false;
        
        if((n&(n-1))==0)
            return true;
        else return false;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
if(n<=0) return false;
        int cnt=0;
        //by left shift
        for(int i=0;i<32;i++){
            int x=1<<i;
            if((x&n)!=0)
            cnt++;
            }
        if(cnt==1) return true;
        else return false;
    }
};*/