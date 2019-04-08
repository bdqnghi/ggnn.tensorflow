
int sort(int arr[],int n);
int bubblesort(int arr[], int n);

int bubblesort(int arr[], int n)
{
	int sorted=0;

	while(sorted<n-1)
	{
		int changed=0;
		int i;
		for(i=0;i<n-sorted-1;i++)
		{
			if (arr[i]>arr[i+1])
			{
				int t=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=t;
				changed=1;
			}
		}
		
		if(!changed)
			break;

		sorted++;
	}

	return arr[n-1];
}

int main()
{
	int n,arr[100000],k,i=0,index=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	bubblesort(arr,n);

	if (arr[0]+arr[1]>k || arr[n-1]+arr[n-2]<k)
	{
		printf("no");
		return 0;
	}

	int flag=0;

	int n1=0,n2=n-1;
	while(n1<n2)
	{
		if (arr[n1]+arr[n2]==k)
		{
			printf("yes");
			return 0;
		}
		if (arr[n1]+arr[n2]>k)
			n2--;
		else
			n1++;
	}
	printf("no");
	
	return 0;
}