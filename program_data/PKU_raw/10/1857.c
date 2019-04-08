void main()
{
	int i,k,max,n;
	scanf("%d",&n);
	int h[25],m[25];
	for(i=0;i<=n-1;i++)
		scanf("%d",&h[i]);
	m[n-1]=1;
	max=m[n-1];
	for(i=n-2;i>=0;i--)
	{m[i]=1;
	for(k=i+1;k<=n-1;k++)
		if((h[i]>=h[k])&&(m[i]<1+m[k]))
			m[i]=m[k]+1;
		if(m[i]>max)
			max=m[i];
	}
	printf("%d",max);
}