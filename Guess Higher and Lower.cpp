int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long start=1;
        long end = n;
        long mid;

    while(start<=end){
        mid=(start + end)/2;
        int ans=guess(mid);
        if(ans==0){
            return mid;
        }else if(ans==1){
            start=mid+1;
        }else if(ans==-1){
            end=mid-1;
        }
    }
    return 0;
    }
};
