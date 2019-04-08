int main()
{
	int A[100],i,j,t=0,n;
	int *pt;
	pt=A;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",pt);
		pt++;
	}
	for(pt=A+n-1;pt>=A;pt--)
	{
		if(t==0)
		{
			printf("%d",*pt);
			t++;
		}
		else
		{
		   printf(" %d",*pt);
		}
	}
	return 0;
}