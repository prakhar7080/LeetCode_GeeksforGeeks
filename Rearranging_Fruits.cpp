class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>map;
        int minEle = INT_MAX;
        for(int &ele : basket1){
            map[ele]++;
            minEle = min(ele,minEle);
        }
        for(int &ele : basket2){
            map[ele]--;
            minEle = min(ele,minEle);
        }
        vector<int>finalList;
        for(auto &ele : map){
            int cost = ele.first;
            int count = ele.second;

            if(count == 0){
                continue;
            }
            if(count%2 != 0){
                return -1;
            }
            for(int c=1;c<=abs(count)/2;c++){
                finalList.push_back(cost);
            }
        }
        sort(begin(finalList),end(finalList));

        long long result = 0;
        for(int i=0;i<finalList.size()/2;i++){
            result += min(finalList[i],minEle*2);
        }
        return result;
    }
};
