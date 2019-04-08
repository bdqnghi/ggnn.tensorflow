int max(int b[26])
{
	int l,m;
	for(l=1;l<25;l++)
		for(m=l+1;m<26;m++)
			if(b[l]<b[m])
			{
				int s;
				s=b[l];
				b[l]=b[m];
				b[m]=s;
			}
	return b[1];
}
int main()
{
	int a[26]={0},b[26]={0},i,j,k,l,m;
	scanf("%d",&k);
	scanf("%d",&a[1]);
	b[1]=1;
	for(i=2;i<=k;i++)
	{
		scanf(" %d",&a[i]);
		b[i]=1;
	}
	for(j=k-1;j>0;j--)
	{
		int c[26]={0},s=1;
		for(l=j+1;l<=k;l++)
		{	
			if(a[j]>=a[l])
			{	
				c[s]=b[l];
				s++;
			}
		}
		m=max(c);
		b[j]=b[j]+m;
	}
	printf("%d\n",max(b));
	return 0;
}