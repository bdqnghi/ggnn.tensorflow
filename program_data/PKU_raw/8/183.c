int m,n;int a[1000];int b[1000];int c[2000];int i;int j;

void f1()
{
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
  	  scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	   scanf("%d",&b[j]);
}
void f2()
{
	int t;
	for(j=0;j<m-1;j++)
	for(i=0;i<m-1-j;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	{
		if(b[j]>b[j+1])
		{t=b[j];
			b[j]=b[j+1];
			b[j+1]=t;}
	}
	
}
void f3()
{
	int s;
	for(s=0,i=0;s<m,i<m;s++,i++)
		c[s]=a[i];
	for(s=m,j=0;s<m+n-2,j<n;s++,j++)
		c[s]=b[j];
}
void f4()
{
	printf("%d",c[0]);
	for(i=1;i<=m+n-1;i++)
	printf(" %d",c[i]);
	printf("\n");
}
void main()
{
	 f1();
	 f2();
	 f3();
	 f4();
}