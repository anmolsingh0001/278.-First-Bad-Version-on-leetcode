// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=0;
        int end=n;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<end){
            if(isBadVersion(mid)){
                ans=mid;
                end = mid;
            }
            else if(!isBadVersion(mid)){
                start=mid+1;
            }
             mid=start+(end-start)/2;
            
        }
        return start;
    }
};