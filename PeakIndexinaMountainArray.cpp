#include<vector>
using namespace std;

class Solution {
public:
  
    int find_pivot(vector<int> v) {
	int s = 0, e = v.size() - 1;
	
	while (s < e)
	{
        int mid= s + (e-s)/2;
		if(v[mid] < v[mid+1])
     			s=mid+1;
    		else
      			e = mid;	
	}
	return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};