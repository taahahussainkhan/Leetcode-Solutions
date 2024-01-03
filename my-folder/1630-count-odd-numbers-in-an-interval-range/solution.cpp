class Solution {
public:
    int countOdds(int low, int high) {
        int n = low, odd = 0 ;
        for(int i = low; i <= high ; i++ )
        {
            if(low%2 != 0)
            {
                odd++;
            }
            low++;
        }
        return odd;
    }
};
