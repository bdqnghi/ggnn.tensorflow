
int main()
{
	int arr[1001];
	int left[1001];
	int cnt;
	int i,j,k;
	while(scanf("%d",&arr[0])!=EOF)
	{
		cnt=1;
		char ch;
		while(scanf("%c",&ch)!=EOF&&ch==',')
		{
			scanf("%d",&arr[cnt]);
			cnt++;
		}
		for(i=0;i<cnt-1;i++)
			scanf("%d,",&left[i]);
		scanf("%d",&left[cnt-1]);
		int min=arr[0];
		int max=left[0];
		for(i=0;i<cnt;i++)
		{
			if(arr[i]<min)
				min=arr[i];
			if(left[i]>max)
				max=left[i];
		}
		int count=0;
		int mcnt=0;
		for(i=min;i<=max;i++)
		{
			count=0;
			for(j=0;j<cnt;j++)
			{
				if(arr[j]<=i&&left[j]>i)
					count++;
			}
			if(count>mcnt)
				mcnt=count;
		}
		printf("%d %d\n",cnt,mcnt);
	}
}