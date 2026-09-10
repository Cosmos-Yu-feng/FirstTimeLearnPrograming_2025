# include <stdio.h>
# define MAX(a, b) ((a) > (b) ? (a) : (b))
int maximumlengthSubstring(char* s) {
	int count[128] = {};  // 
	int ans = 0, left = 0;
	for (int right = 0; s[right]; right++) {
		count[s[right]]++;
		while (count[s[left]] > 2) {
			count[s[left]]--;
            left++;
		}
		ans = MAX(ans, right - left + 1);
	}
}

int main() {
	char str[100] = "ISreallrllllyoubing";
	int ans = maximumlengthSubstring(str);
	printf("%d",ans);	
	return 0;
}
