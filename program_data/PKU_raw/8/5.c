void main()
{
	int m,n;
	int a[100];
	int b[100];
	int c[200];
	void read(int a[],int b[],int m,int n);
	void paixu(int a[],int b[],int m,int n);
	void combine(int c[],int a[],int b[],int m,int n);
	void type(int c[],int m,int n);
	scanf("%d%d",&m,&n);
    read(a,b,m,n);
	paixu(a,b,m,n);
	combine(c,a,b,m,n);
	type(c,m,n);
	
}

void read(int a[],int b[],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
}



void paixu(int a[],int b[],int m,int n)
{
    int i,j,t;
    for(j=0;j<m-1;j++)
		for(i=0;i<m-j-1;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-j-1;i++)
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
}


void combine(int c[],int a[],int b[],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=0;i<n;i++)
		c[i+m]=b[i];
}


void type(int c[],int m,int n)
{
    int num,i;
	num=m+n;
	for(i=0;i<num;i++)
			  if(i<num-1)
			  printf("%d ",c[i]);
			  else
				  printf("%d\n",c[i]);
}