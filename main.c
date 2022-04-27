// Question : https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min(int a,int b)
{
    return (a>b)?b:a;
}

int main()
{
    int arr_len;
    // int arr[4] = {4,3,2,1};
    scanf("%d",&arr_len);

    int arr[arr_len];
    for (int i = 0,j = arr_len; i < arr_len; i++,j--)
    {
        arr[i] = j;
    }
    


    int height = (2*arr_len)-1;
    for(int i = 0; i < height;i++)
    {
        for(int j = 0;j <= min(i,height-1-i);j++)
        {
            printf("%d ",arr[j]);
        }

        for (int k = 0; k < (2*abs(arr_len-i-1))-1; k++)
        {
            printf("%d ",arr[min(i,abs(height-i-1))]);
        }

        for(int j =  min(i,height-1-i);j >=0;j--)
        {
            if(i == height/2 && j == min(i,height-1-i))
                continue;
            printf("%d ",arr[j]);
        }
        
        printf("\n");
    }
    return 0;
}
