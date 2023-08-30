
#include <stdio.h>

int main() {
    int arr[5] = {2,5,1,4,1};
    int len = sizeof(arr)/sizeof(arr[1]);
  
  // Loop over the given array and exchange if key < previous integer
   for(int i=1;i<len;i++)
    {
        int key=arr[i];
        int j= i-1;
        
        while(j>=0 && key<arr[j])
        {
            
            arr[j+1]=arr[j];
            arr[j]=key;
            j--;
        }
        
        
        
    }
    
    // Print the sorted array
    for( int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
