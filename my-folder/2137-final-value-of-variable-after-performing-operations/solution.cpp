class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0, k;
        k = operations.size();;
        while(k--){
            if(operations[k] == "X++" ) x++;
            else if(operations[k] == "++X") ++x;
            else if(operations[k] == "X--") x--;
            else if(operations[k] == "--X") --x;
        }
        return x;
    }     
};
