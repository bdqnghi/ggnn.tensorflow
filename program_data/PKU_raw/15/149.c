
int main(int argc, char* argv[])
{
	int n,i,j,x1,x2,y1,y2,s;
	int a[1000][1000];
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	x1=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==0)
			{
				y1=i,x1=j;
				break;
			}
		}
		if(x1!=0)break;
	}
	x2=0;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(a[i][j]==0)
			{
				y2=i,x2=j;
				break;
			}
		}
		if(x2!=0)break;
	}
	s=(x2-x1-1)*(y2-y1-1);
	printf("%d\n",s);
	return 0;
}