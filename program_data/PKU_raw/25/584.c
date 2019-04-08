int main()
{
	int N;
	int start;
	scanf("%d",&N);
	if(N==1)
	{
		printf("2");
		return 0;
	}
	int sz[51];
	for(int i=1;i<=50;i++)
	{
		sz[i]=0;
	}
	sz[1]=1;
	
	for(int j=1;j<=N;j++)
	{
		for(int p=1;p<=50;p++)
		{
			sz[p]=2*sz[p];
		}
		for(int q=1;q<=50;q++)
		{
			if(sz[q]>9)
			{
				sz[q+1]=sz[q+1]+1;
				sz[q]=sz[q]-10;
			}
		}
	}
	for(int k=50;k>=1;k--)
	{
		if(sz[k]!=0)
		{
			start=k;
			break;
		}
		
	}
	for(int l=start;l>=1;l--)
	{
		printf("%d",sz[l]);
	}
	return 0;
}

 

