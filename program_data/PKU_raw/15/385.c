int main(int argc, char* argv[])
{
	int i,j,C[1000][1000];
	int n,s;
	int a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&(C[i][j]));
		}
	}
	for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=0;j<n;j++)
		{
			if(C[i][j]==0)
				sum = sum +1;
		
		if(sum>2)
			a=sum;
		}
	}
	for(j=0;j<n;j++)
	{
		int um=0;
		for(i=0;i<n;i++)
		{
			if(C[i][j]==0)
			um = um +1;
		
		if(um>2)
			b=um;
		}
	}

	s=(a-2)*(b-2);
	printf("%d\n",s);
	return 0;
}

