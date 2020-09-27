class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = logs.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(logs[i]!= "../" && logs[i]!= "./"){ count++; }
            if(logs[i]== "../"){ count = count==0?0:count-1; }
            if(logs[i]== "./"){ continue; }
        }
        return count;
    }
};