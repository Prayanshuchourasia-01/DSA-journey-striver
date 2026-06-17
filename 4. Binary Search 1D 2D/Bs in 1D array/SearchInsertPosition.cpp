class Solution {
public:
    int searchInsert(vector<int>& arr, int m) {
        	int low = 0 ; int high = arr.size()-1;
	int lower = lower_bound(arr.begin(),arr.end(),m)-arr.begin();
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==m){
			return mid;
		}
		else if(arr[mid]>m){
			high = mid -1 ;
		}
		else{
			low = mid + 1;
		}
	}
	return lower;
    }
};