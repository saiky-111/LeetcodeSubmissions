class Solution {
public:
    int hammingWeight(uint32_t n) {
        //left shift
        int cnt=0;
        for(int i=0;i<32;i++){
if((n&(1<<i))!=0){
    cnt++;
}
    }
return cnt;
    }
    
};
 /*right shift   
 int cnt=0;
        while(n>0){
            if((n&1)!=0){//checking 0th bit first
                cnt++;
            }
            n=n>>1;
        }
    return cnt;*/