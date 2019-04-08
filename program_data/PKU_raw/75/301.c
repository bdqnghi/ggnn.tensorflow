int main()
{
	int x[1001],y[1001],i,j,m,k=0,a[1001],b[1001]={0};
	char c;
	for(i=1;i<1001;i++)
		a[i]=i;
	for(i=1;i<1001;i++)
	{
		scanf("%d%c",&x[i],&c);
			k+=1;
		if(c!=',')
			break;
	}
	for(i=1;i<=k;i++)
		scanf("%d%c",&y[i],&c);
	for(i=1;i<=k;i++)
		for(j=x[i];j<y[i];j++)
			b[j]+=1;
	m=b[1];
	for(i=2;i<1001;i++)
	{
		if(b[i]>m)
			m=b[i];
	}
	printf("%d %d\n",k,m);
	return 0;
}
