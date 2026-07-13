#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(const vector<int>& stalls, int cows, int minDist) {
    int countCows = 1;               
    int lastPlacedPosition = stalls[0]; 

    for (size_t i = 1; i < stalls.size(); ++i) {
        if (stalls[i] - lastPlacedPosition >= minDist) {
            countCows++;             
            lastPlacedPosition = stalls[i]; 
        }
        
        if (countCows >= cows) {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int low = 1;                           
    int high = stalls[n - 1] - stalls[0];  
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (isPossible(stalls, cows, mid)) {
            ans = mid;     
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> stalls = {1, 2, 8, 4, 9};
    int cows = 3;

    int maxMinDist = aggressiveCows(stalls, cows);

    cout << "The largest minimum distance is: " << maxMinDist << "\n";

    return 0;
}
