int main()
{
	int n,i,j,ki,kj,endj,endi,a[1000][1000],s;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	ki=-1;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			if(a[i][j]==0)
			{
				ki=i;
				kj=j;
				break;
			}
		if (ki>=0)
			break;
	}
	for(i=ki,j=kj;j<=n;j++)
		if(a[i][j]==255)
		{
			endj=j-1;
			break;
		}
	for (i=ki,j=kj;i<=n;i++)
		if(a[i][j]==255)
		{
			endi=i-1;
			break;
		}
	s=(endi-ki-1)*(endj-kj-1);
	printf("%d",s);
return 0;
}