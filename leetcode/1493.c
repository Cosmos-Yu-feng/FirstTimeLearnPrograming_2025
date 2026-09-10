# include <stdio.h>
# define MAX(a, b) ((a) > (b) ? (a) : (b))
int function(int* nums, int numSize) {
	int ans = 0, left = 0;
	int total_1 = 0, total_0 = 0; 
	for (int right = 0; right < numSize; right++) {
		if (nums[right] == 1) {
			total_1++;
		}
		else {
			total_0++;
		}
		if (total_0 > 1) {
			left++;
			if (nums[right] == 1) {
				total_1--;
			}
			else {
				total_0--;	
			}
		}
	ans = MAX(ans, right - left + 1);
	}
	return ans;
} 

int main() {
	int nums[12] = {1,0,0,0,1,1,1,1,0,1,0,1};
	int numSize = 12;
	int ans = function(nums,numSize);
	printf("%d",ans);
}
