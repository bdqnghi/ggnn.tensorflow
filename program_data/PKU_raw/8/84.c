int a[20],b[20],c[40],m,n,i,j,temp;
void main()
{
	void putin(int a[20],int b[20]);
	void exchange(int a[20],int b[20]);
	void together(int a[20],int b[20]);
	void putout(int c[40]);
	putin(a,b);
	exchange(a,b);
	together(a,b);
	putout(c);
}
void putin(int a[20],int b[20])
{
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) scanf("%d",&b[i]);
}
void exchange(int a[20],int b[20])
{
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
}
void together(int a[20],int b[20])
{
	for(i=0;i<m;i++) c[i]=a[i];
	for(i=0;i<n;i++) c[m+i]=b[i];
}
void putout(int c[40])
{
	for(i=0;i<m+n;i++) 
	{
		printf("%d",c[i]);
		if(i!=m+n-1) printf(" ");
	}
}