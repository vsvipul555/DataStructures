#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,j,x;
	scanf("%d",&n);
	int arr[n+1][n+1];
	int inp[n+1];
	for (i=0;i<=n;i++)
	{
		for (j=0;j<=n;j++)
		{
			arr[i][j]=0;
		}
	}
	for (i=0;i<=n;i++)
	{
		scanf("%d",&inp[i]);
	}
	for (i=0;i<=n;i++)
	{
		if (i-2>=0)
			arr[i][i-2]=1;
		if (i+1<=n)
			arr[i][i+1]=1;
		if (i+2<=n)
			arr[i][i+2]=1;
		if (i+5<=n)
			arr[i][i+5]=1;
		if (i+10<=n)
			arr[i][i+10]=1;

	}
	for (i=0;i<=n;i++)
	{
		for (j=0;j<=n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int org;
	while (1)
	{
		printf("\nEnter a vertex index to print its outgoing edges. Enter -1 to exit.\n");
		scanf("%d",&org);
		if (org==-1)
			break;
		if (org<0 || org>n)
			printf("Check index entered\n");
		for (i=0;i<=n;i++)
		{
			if (arr[org][i])
				printf("%d ",inp[i]);
		}
		printf("\n");
	}
	return 0;
}
