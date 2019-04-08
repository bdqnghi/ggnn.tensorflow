
int main()
{
	int n,b[1000][1000],i,k,s;
	int x1,x2,y1,y2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			scanf("%d",&(b[i][k]));
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(b[i][k]==0&&b[i+1][k]==b[i][k]&&b[i][k+1]==b[i][k])
			{
				x1=i;
				y1=k;
			}
			if(b[i][k]==0&&b[i-1][k]==b[i][k]&&b[i][k-1]==b[i][k])
			{
				x2=i;
				y2=k;
			}
		}
	}
	s=(x2-x1-1)*(y2-y1-1);
	printf("%d",s);
	return 0;
}