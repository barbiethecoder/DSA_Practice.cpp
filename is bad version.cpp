class Solution {
public:
    int firstBadVersion(int n) {
        long long int start=1;
        long long int end=n;
        long long int mid;
        while(start<=end){
            mid=(start+end)/2;
            if(isBadVersion(mid)){
                end = mid - 1;
            }else if(!isBadVersion(mid)){
                start = mid + 1;
            } 
        }
        return start;
    }
};
