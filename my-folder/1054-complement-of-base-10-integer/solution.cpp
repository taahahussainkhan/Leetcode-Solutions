class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0, arp =n, c=0;
        while(arp){
            c++; 
            arp >>= 1;
        }
        mask = mask | 1;
        for(int i=0 ;i < c-1 ;i++)
        {
            mask <<= 1;
            mask |=1;
        }
        n =~n;
        return mask&n;
        
    }
};
