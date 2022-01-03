#include <bits/stdc++.h>

using namespace std;

pair<int,int> twosum(vector<int> &nums, int target);

int main(){

    vector<int> nums{2,7,11,15};
// the targeted sum
    int target = 9;
    
   pair<int,int> ans = twosum(nums, target);
   cout << ans.first << " " << ans.second << endl;

}

pair<int,int> twosum(vector<int> &nums, int target){
    int diff;
    unordered_map<int, int> numMap;
    for (int i=0; i < nums.size(); i++){
        diff = target - nums[i];
        // if diff exist in numMap
        if(numMap.find(diff) != numMap.end()){
            //return the index of diff and the current index
            return {numMap[diff],i};
        }
        else
// else add the current value and index in the numMap
            numMap[nums[i]] = i ;
        }
    }

// if the two sum not found return {0,0}
    return {0,0};
}
