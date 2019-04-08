int main()
{
	int i,j,k,a[10000],b[10000],t=0,p[1000]={0},n,q;
	char c=',';
	for(i=0;c==',';i++)
	{
		scanf("%d",&a[i]);
		c=getchar();
	}
	for(j=0;j<i;j++)
	{
		scanf("%d",&b[j]);
		c=getchar();
	}
	printf("%d ",i);
	n=i;
	k=0;
	for(t=0;t<=999;t++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]<=t&&b[i]>=t+1)
				p[k]=p[k]+1;
			else;
		}
		k=k+1;
	}
	q=p[0];
	for(i=0;i<k;i++)
	{
		if(p[i]>q)
			q=p[i];
		else;
	}
	printf("%d",q);
	return 0;
}