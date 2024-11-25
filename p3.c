#include <stdio.h>
#define MAXSIZE 10

int heap[MAXSIZE];
int N=0;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(int val)
{
	N=N+1;
	int pos=N,par;
	heap[N]=val;
	while(pos>1)
	{
		par=pos/2;
		if(heap[pos]<=heap[par])
		{
			return;
		}
		else
		{
			swap(&heap[pos],&heap[par]);
			pos=par;
		}
	}
}

int main()
{
	printf("ENTER NUMBER OF ELEMENTS\n");
    int n,i,j,val;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    	printf("Enter value : ");
    	scanf("%d",&val);
    	insert(val);
    	printf("DISPLAYING ELEMENTS OF ARRAY\n"); 
    	for (j = 0; j <=i+1; j++)
        printf(j==i?"%d\n":"%d, ", heap[j]);
	}
	printf("DISPLAYING ELEMENTS OF ARRAY\n"); 
    for (i = 0; i < n+1; i++)
        printf(i==n-1?"%d\n":"%d, ", heap[i]);
    return 0;
}
