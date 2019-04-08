int num=0;
int input[26];
int state[26];
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<n;i++)
		state[i]=1;
	for(i=0;i<n;i++)
		scanf("%d",&input[i]);
	state[0]=1;
	for(j=1;j<n;j++)
	{
		int min=1;
		for(i=0;i<j;i++)
		{
			if(input[i]>=input[j])
			{
				if(state[i]+1>min)
					min=state[i]+1;
			}
		}
		state[j]=min;
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		if(state[i]>sum)
			sum=state[i];
	}
	printf("%d\n",sum);
	return 0;
}
