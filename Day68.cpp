class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        long long totalTimeToPick = 0, sz = garbage.size();
        unordered_map<char, int> lastHouseToVisit;
        vector<long long> travelTime(sz-1);
        for(int indx = 0; indx < sz-1; indx++){
           if(indx > 0) 
            travelTime[indx] = travelTime[indx - 1] + travel[indx];
           else 
            travelTime[indx] = travel[indx]; 
        } 
        for(int indx = 0; indx < sz; indx++){
            int totalGrabUnits = garbage[indx].size();
            totalTimeToPick += totalGrabUnits;
            for(auto grab : garbage[indx])lastHouseToVisit[grab] = indx;
        }
        for(auto &pr : lastHouseToVisit){
            int lastHouse = pr.second;
            if(lastHouse != 0)
             totalTimeToPick += travelTime[lastHouse - 1];
        }
        return totalTimeToPick;
    }
};
