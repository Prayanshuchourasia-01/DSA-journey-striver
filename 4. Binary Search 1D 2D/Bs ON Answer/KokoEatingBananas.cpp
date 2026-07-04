#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>& piles){
    int mx = piles[0];

    for(int x : piles)
        mx = max(mx, x);

    return mx;
}

long long calculateHours(vector<int>& piles, int speed){
    long long hours = 0;

    for(int x : piles){
        hours += (x + speed - 1) / speed; // ceil(x/speed)
    }

    return hours;
}

int minimumRateToEatBananas(vector<int>& piles, int h) {

    int low = 1;
    int high = findMax(piles);

    while(low <= high){

        int mid = low + (high - low) / 2;

        long long hours = calculateHours(piles, mid);

        if(hours <= h)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return low;
}