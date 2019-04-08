int main()
{
	int i,l,a[10000],n,k,f=0,m;
	scanf("%d %d",&n,&k);
	for (i=0;i<=n;i++)
		scanf("%d",&a[i]);
	for (l=0;l<=n;l++)
	{
		for (m=l+1;m<=n;m++)
		{
			if(a[l]+a[m]==k)
					f=f+1;
		}
	}
	if (f!=0)
		printf("yes");
	else
		printf("no");
	return 0;
}




	

