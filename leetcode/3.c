# define MAX(a, b) ((a) > (b) ? (a) : (b)) 
# include <stdio.h> 
int Best_lenth_string(char* s) {
	int ans = 0, left = 0;
	int count[128] = {};   
	for (int right = 0; s[right]; right++) {  
		char c = s[right];
		count[c]++;
		while (count[c] > 1) {  
			count[s[left]]--;
            left++;
		} 
		ans = MAX(ans, right - left + 1);
 	}
	return ans;
}

int main() {
	char str[100] = "ISreallyloveforyoubing";
	int ans = Best_lenth_string(str);
	printf("%d",ans);
}
