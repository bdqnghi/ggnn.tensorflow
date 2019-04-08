int main()
{
	int n,a[500],i,j,m=0,c[500];
	float s=0,b[500],t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	s=s/n;
	for(i=0;i<n;i++)
	{
		b[i]=(a[i]-s>0)?(a[i]-s):(s-a[i]);
		if(t<b[i])
			t=b[i];
	}
	for(i=0;i<n;i++)
		if(b[i]==t)
		{
			c[m]=a[i];
			m++;
		}
	for(i=0;i<m-1;i++)
		for(j=0;j<m-1-i;j++)
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
	for(i=0;i<m;i++)
		printf("%d%c",c[i],(i==m-1)?'\n':',');
}





