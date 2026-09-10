// int xorOperation(int n, int start) 
// {
//     int nums[n],result;
//     for (int i = 0;i < n;i++)
//     {
//         nums[i] = start + 2 * i;
//     }
        
//     if (n > 1)
//     {
//         int result = nums[0] ^ nums[1];
//         for (int i = 2;i < n;i++)
//         {
//             result = result ^ nums[i];
            
//         }
    
//     }

//     else if (n == 1)
//     {
//         result = start;
//     }
//     return result;
// }

# include <stdio.h>

int xorOperation(int n, int start) 
{
    int ans = 0;
    for (int i = 0;i < n;i++)
    {
        ans ^= (start + 2 *i);
    }
    return ans;
}

int main()
{
    int XOR = xorOperation(10,5);
    
    printf("异或运算的结果是：%d\n",XOR);

    return 0;
}

