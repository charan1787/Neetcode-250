class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int mini_cap=0,maxi_cap=0;
        for(int w : weights){ mini_cap = max(w,mini_cap); maxi_cap = maxi_cap+ w;}

        while(mini_cap < maxi_cap){

            int mid_cap = (mini_cap + maxi_cap)/2;
            int day3 = counter(weights,mid_cap);

            if(day3>days){
                mini_cap = mid_cap + 1 ;
            }
            else maxi_cap = mid_cap; // important to know why ?

        }

        return mini_cap;

    }

    int counter(vector<int>& weights, int capacity){
        int d = 1;
        int sum = 0;
        for(int w : weights){
            if(sum + w > capacity){
                d++;
                sum = w;
                continue;
            }
            sum = sum + w;
        }
        return d;
    }
};


// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

// mini capacity is max weight of box
// max capacity is the sum of all the weights

// mini cap has more days required
// maxi cap has less days required

// answer lies in between these 2 capacities.

// run a loop to find the number of days for each capcity betwen these 2

// use binary search here as it is sorted. (capacities)
