int main()
{
	int n,a[300],i,j,c=0,z=0,b[302];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])c=c+1;
		}
		if(c==0)b[z]=a[i],z++;
		c=0;
	}
	b[z]=a[0];
	for(i=z;i>0;i--)printf("%d,",b[i]);
	printf("%d",b[0]);
}
