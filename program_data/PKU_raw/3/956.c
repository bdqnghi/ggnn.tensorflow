int main()
{
	int n,k,i,j,m=0;
    int SZ[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&SZ[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(SZ[i]+SZ[j]==k)
			{
				m=1;
				goto a;
			}
		}
	}
a: if(m==0)
	{
		printf("no");
	}
  else if(m==1)
	{
		printf("yes");
	}
	return 0;
}