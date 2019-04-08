int c[200];

void main()
{
    void to(int a[],int b[],int n,int m);
  	void hebing(int a[],int b[],int n,int m);
	void print(int c[],int n,int m);
	int n,m,a[100],b[100],i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
    
	to(a,b,n,m);
	hebing(a,b,n,m);
	print(c,n,m);
}

void to(int a[],int b[],int n,int m)
{
	int t,u,s,f,e,p;
	for(t=0;t<n-1;t++)
	{
		for(u=t+1;u<n;u++)
		{
			if(a[t]>a[u])
			{
				s=a[t];
				a[t]=a[u];
				a[u]=s;
			}
		}
	}
	for(f=0;f<m-1;f++)
	{
		for(e=f+1;e<m;e++)
		{
			if(b[f]>b[e])
			{
				p=b[f];
				b[f]=b[e];
				b[e]=p;
			}
		}
	}

}
void hebing(int a[],int b[],int n,int m)
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		c[n+i]=b[i];
	}
}
void print(int c[],int n,int m)
{
	int i;
	for(i=0;i<n+m-1;i++)
	{
		printf("%d ",c[i]);
	}
	printf("%d\n",c[n+m-1]);
}