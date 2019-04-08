int max(int p[],int n)
{
	int t,m=0;
	m=p[0];
	p[0]=0;
	for(t=0;t<n;t++)
	{
		if (m<p[t])	m=p[t];
		p[t]=0;
	}
	return m;
}
int main ()
{
	int m,t,p=0,k,n;
	int c[25];
	scanf("%d",&m);
	int *a=(int*)malloc(m*sizeof(int));
	int *b=(int*)malloc(m*sizeof(int));
	for (t=0;t<m;t++)
	scanf("%d",&a[t]);
	b[m-1]=1;
	for(t=(m-2);t>(-1);t--)
	{
		for(n=(t+1);n<m;n++)
		{
			if (a[t]>=a[n]) 
			{
				c[p]=b[n];
				p++;
			}
		}
		b[t]=max(c,p)+1;
		p=0;
	}
	k=max(b,m);
	printf("%d",k);

}