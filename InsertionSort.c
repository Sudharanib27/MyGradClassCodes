// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,key;
    int arr[6]={31,41,59,26,41,58};
    int len =sizeof(arr)/sizeof(arr[0]);
    for(j=1;j<len;j++)
    {
        i=j-1;
        key=arr[j];
        while(i>=0 && arr[i]<key)
        {
            arr[i+1]=arr[i];
            arr[i]=key;
            i--;
        }
        
    }
    for(i=0;i<len;i++)
    {
      printf("%d\n",arr[i]);  
    }

    return 0;
}