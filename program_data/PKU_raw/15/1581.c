int main ()
{
	int n,i,j;	
	int sz [1000][1000];
	int a1,a2,b1,b2,a,b,c;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for( i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i][j]==0 && sz[i-1][j]!=0 &&sz[i][j-1]!=0)
			{
				a1=i,b1=j;
			}
			if(sz[i][j]==0 && sz[i+1][j]!=0 &&sz[i][j+1]!=0)
			{
				a2=i,b2=j;
			}
		}
	}
	a=a2-a1-1;
	b=b2-b1-1;
	c=a*b;
	printf("%d\n",c);
	return 0;
}
