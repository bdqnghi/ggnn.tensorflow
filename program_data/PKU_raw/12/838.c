void main()
{
	int cnt(int *,int);
	int b[50],a[16],i,j,h;
	for(i=0;i<50;i++)
	{
		scanf("%d",&h);
		if(h==-1)break;
		for(a[0]=h,j=1;j<16;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]==0)break;
		}
		b[i]=cnt(a,j);
	}
	for(j=0;j<i;j++)
	printf("%d\n",b[j]);
}
int cnt(int *m,int n)
{
	int k,l,p=0;
	for(k=0;k<n;k++)
		for(l=0;l<n;l++)
			if(2**(m+k)==*(m+l))p++;
	return (p);
}
