static int n1,n2,a[100]={0},b[100]={0},d[200]={0};
void f1()
{
	int i;
	scanf("%d %d",&n1,&n2);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
}
void pai()
	{
		int c,i,j;
		for(j=0;j<n1;j++)
		{
			for(i=0;i<n1-1;i++)
			{
				if(a[i]>a[i+1])  
				{
				    c=a[i];
				    a[i]=a[i+1];
				    a[i+1]=c;
				}
			}
		}
		for(j=0;j<n2;j++)
		{
			for(i=0;i<n2-1;i++)
			{
				if(b[i]>b[i+1])  
				{
				    c=b[i];
				    b[i]=b[i+1];
				    b[i+1]=c;
				}
			}
		}
	}
void he()
	{
		int i;
		for(i=0;i<n1;i++)
		{
			d[i]=a[i];
		}
		for(i=n1;i<n1+n2;i++)
		{
			d[i]=b[i-n1];
		}
	}
void shu()
	{
		int i;
		for(i=0;i<n1+n2-1;i++)
		{
			printf("%d ",d[i]);
		}
        printf("%d",d[n1+n2-1]);
	}
void main()
{
	f1();
	pai();
	he();
	shu();
}