void f1(int a[],int x,int b[],int y)
{
	int m,n,i;

	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
//		printf("a[%d]=%d ",i,a[i]);
	}
	for(i=m;i<x;i++)
		a[i]=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
//		printf("b[%d]=%d ",i,b[i]);
	}
	for(i=n;i<y;i++)
		b[i]=-1;
}

void f2(int a[],int x,int b[],int y)
{
	int i,j,t,m,n;
	
	for(i=0,m=0;i<x;i++)
		if(a[i]>=0)
			m++;
	
	for(i=0,n=0;i<y;i++)
		if(b[i]>=0)
			n++;

	for(j=0;j<m-1;j++)
	{
		for(i=0;i<m-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
}

void f3(int a[],int x,int b[],int y,int c[],int z)
{
	int i,m,n;

	for(i=0,m=0;i<x;i++)
		if(a[i]>=0)
			m++;
	for(i=0,n=0;i<y;i++)
		if(b[i]>=0)
			n++;

	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=0;i<n;i++)
		c[m+i]=b[i];
	for(i=n+m;i<z;i++)
		c[i]=-1;
}

void f4(int c[],int x)
{
	int i,e;

	for(i=0,e=0;i<x;i++)
		if(c[i]>=0)
			e++;
	for(i=0;i<e;i++)
	{
		printf("%d",c[i]);
		if(i!=e-1)
			printf(" ");
	}
}

void main()
{
	int a[30],b[30],c[60];
	int i;

	f1(a,30,b,30);           /* m,n,a,b */
	
	f2(a,30,b,30);           /* a reconstr */
	
//	for(i=0;i<30;i++)
//		if(a[i]>=0)
//			printf("%d",a[i]);
//	for(i=0;i<30;i++)
//		if(b[i]>=0)
//			printf("%d",b[i]);

	f3(a,30,b,30,c,60);           /* b reconstr */
///	for(i=0;i<60;i++)
///		if(c[i]>=0)
///			printf("%d",c[i]);
	f4(c,60);
		

}

