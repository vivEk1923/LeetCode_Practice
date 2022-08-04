class Solution {
public:
    int minPartitions(string n) {
        int solution = 0;
        for(char x:n){
            int value = x - 48;
            solution = max(solution,value);
        }
        return solution;
    }
};