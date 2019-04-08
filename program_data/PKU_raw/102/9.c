int main()
{
	int i,n,j=0,k=0,m;
    double b[40],c[40],zh,d[40];
	char a[40][7];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",&a[i],&b[i]);
		if(a[i][0]==109)
		{   
			c[j]=b[i];
			j++;
		}
		else
		{
			d[k]=b[i];
		    k++;
		}
	}
	for(m=1;m<j;m++)
	{
		for(i=0;i<j-m;i++)
		if(c[i]>c[i+1])
		{
			zh=c[i];
			c[i]=c[i+1];
			c[i+1]=zh;
		}
	}
	for(m=1;m<k;m++)
	{
		for(i=0;i<k-m;i++)
		if(d[i]<d[i+1])
		{
			zh=d[i];
			d[i]=d[i+1];
			d[i+1]=zh;
		}
	}
	for(i=0;i<j;i++)
	{
		if(i==0)
		printf("%.2lf",c[i]);
		else printf(" %.2lf",c[i]);
	}
	for(i=0;i<k;i++)
		printf(" %.2lf",d[i]);
		return 0;
}