class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int min_speed = 1;
        long long int max_speed = 0;
        long long int ans = max_speed;

        for(int p : piles){
            max_speed = max(max_speed,(long long) p);
        }

        while(min_speed <= max_speed){
           long long int mid_speed = min_speed + (max_speed - min_speed)/2;

            long long int mid_hours = helper(piles,mid_speed);

            if(mid_hours <= h){
                ans = mid_speed;
                max_speed = mid_speed - 1;
            }
            else{
                min_speed = mid_speed + 1;
            }
        }

        return (int)ans;
    }


    long long int helper(vector<int>& piles, long long int speed){
        long long int hours = 0;
        for(long long int p : piles){
            if(p <= speed){
                hours++;
            }
            else{
                    long long int c = p / speed;
                    hours += c;
                    //p = p % speed;
                if(p % speed !=0 ) hours++;
            }
        }

        return hours;
    }
};

// https://leetcode.com/problems/koko-eating-bananas/

// Same as Ships problem 1011.leetcode

// use long long everywhere
