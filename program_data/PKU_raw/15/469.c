
int main(int argc,char* argv[])
{
	int shu[1000][1000];
	int n,a,b,c,d,l;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			scanf("%d",&shu[i][j]);
            
		}
		scanf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(shu[i][j]==0)
			{a=i;
			b=j;

			break;}
		}
		if(a!=0)
			break;

	}
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(shu[i][j]==0)
			{c=i;
			d=j;
			break;}
		}
		if(c!=0)break;
	}
	printf("%d",(c-a-1)*(d-b-1));
return 0;
}
