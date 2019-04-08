int main()
{
	int a[1000],n,k,i,j,l,m;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	l=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i)
				continue;
			else
			{
				m=a[i]+a[j];
				if(m==k)
				{
					l++;
					break;
				}
			}
		}
		if(l>0)
			break;
	}
	if(l==0)
		printf("no");
	else
		printf("yes");
	return 0;
}
