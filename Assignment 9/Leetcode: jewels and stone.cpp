class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      
        map<char,int>np;
        for(int i=0;i<stones.size();i++) np[stones[i]]++;
        int sum=0;
        for(int i=0;i<jewels.size();i++){
            sum+=np[jewels[i]];
        }
        return sum;
        
        
        
    }
};
