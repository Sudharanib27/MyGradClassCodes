#include <stdio.h>

void merge_sort(int a[],int l,int r);
void merge_array(int a[],int l,int m,int r);

int main()
{

int a[5]={4,2,9,1,5};

int len=sizeof(a)/sizeof(a[0]);

// print initial array
printf("Initial array : \n");
for(int i=0;i<len;i++)
{
	printf("%d ",a[i]);
}
printf("\n");

// call merge sort function
merge_sort(a,0,len-1);

//print final sorted array
printf("Sorted array : \n");
for(int i=0;i<len;i++)
{
        printf("%d ",a[i]);
}
printf("\n");
return 0;
}

void merge_sort(int a[],int l,int r)
{
	if(l<r)
	{

		
		int m=l + (r-l)/2;

		// Call merge_sort function recursively to devide the arrays into half
		merge_sort(a,l,m);
		merge_sort(a,m+1,r);

		// sort and merge the divided array
		merge_array(a,l,m,r);

	}



}


void merge_array(int a[],int l,int m,int r)
{

	int l1=m-l+1;
	int l2=r-m;
	int la[l1],ra[l2];
	for(int i=0;i<l1;i++)
	{
		la[i]=a[l+i];
	}

	for(int j=0;j<l1;j++)
        {
                ra[j]=a[m+1+j];
        }


	int i=0,j=0,k=l;

	while(i<l1 && j<l2)
	{
		if(la[i]<=ra[j])
		{
			a[k]=la[i];
			i++;
		}
		else
		{
			a[k]=ra[j];
			j++;
		}
		k++;
	}
	
// add remaining element of la[]	
	while (i < l1) {
        a[k] = la[i];
        i++;
        k++;
    }

//add remaining element of ra[]   
    while (j < l2) {
        a[k] = ra[j];
        j++;
        k++;
    }

}
