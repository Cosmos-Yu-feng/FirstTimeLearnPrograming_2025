# include <stdio.h>
# include <stdlib.h>

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    int ans = 0;
    for (int i = 0; i < arrSize; i++){
        for (int j = i + 1; j < arrSize; j++){
            for (int k = j + 1; k < arrSize; k++){
                if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c){
                    ans++;
                }
            }
        }
    }
    return ans;
}

int main(){
    int A[] = {1,34,3,65,24,11};
    int a = 2, b = 6, c = 8;
    int ans = countGoodTriplets(A,6,a,b,c);
    printf("%d\n",ans);

    return 0;

}