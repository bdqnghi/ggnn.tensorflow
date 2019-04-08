void main()
{
	void f(int a[],int b[],int c,int d);
	int a[25],b[25],c,d,i;
	scanf("%d%d",&c,&d);
	for(i=0;i<c;i++)
		scanf("%d",&a[i]);
	for(i=0;i<d;i++)
		scanf("%d",&b[i]);
	f(a,b,c,d);
}
void f(int a[],int b[],int c,int d)
{
	int i,j,t;
	for(i=0;i<c-1;i++)
	{
		for(j=i+1;j<c;j++)
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	}
	for(i=0;i<d-1;i++)
	{
		for(j=i+1;j<d;j++)
			if(b[j]<b[i])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
	}
	for(i=0;i<c;i++)
	printf("%d ",a[i]);
	for(i=0;i<d-1;i++)
		printf("%d ",b[i]);
	printf("%d\n",b[d-1]);
}


