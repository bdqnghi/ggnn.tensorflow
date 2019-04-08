
int main()
{
	int n,i,m;
	double a[41]={0},b[41]={0};
	char s1[41][10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		char c[10];
		scanf("%s %lf",s1[i],&a[i]);
		gets(c);
	}
	int j=0,k=0;
	for(i=1;i<=n;i++)
	{
	    if(s1[i][0]=='m')
	    {
	    	a[j]=a[i];
	    	j++;
	    }
	    if(s1[i][0]=='f')
	    {
	    	b[k]=a[i];
	    	k++;
	    }
	}
	for(i=0;i<j;i++)
	{
		for(m=i+1;m<j;m++)
		{
			if(a[i]>a[m])
			{
				double p;
				p=a[i];
				a[i]=a[m];
				a[m]=p;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		for(m=i+1;m<k;m++)
		{
			if(b[i]<b[m])
			{
				double p;
				p=b[i];
				b[i]=b[m];
				b[m]=p;
			}
		}
	}
	printf("%.2f",a[0]);
	for(i=1;i<j;i++)
	{
		printf(" %.2f",a[i]);
	}
	for(i=0;i<k;i++)
	{
		printf(" %.2f",b[i]);
	}
}
 