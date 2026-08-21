class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        long long crash = 1;
        while(memory1 >= crash || memory2 >= crash){
            
            if(memory1 >= memory2){
                memory1 = (memory1-crash);
            }
            else{
                memory2=(memory2-crash);
            }
            crash++;
        }
        
        return {(int)crash,memory1,memory2};
    }
};