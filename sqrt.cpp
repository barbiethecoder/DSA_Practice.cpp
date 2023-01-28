class Solution {
public:
    int mySqrt(int x) {
        long long start=0;
        long long end;
        long long mid;
        while(start<=end){
        int mid=(start+end)/2;
        
        if((long)mid*mid==x){
            return mid;
        }

        if(x<(long)mid*mid){
            end=mid-1;
        }

        else
        start=mid+1;

        }
       return end; 
    }
};
