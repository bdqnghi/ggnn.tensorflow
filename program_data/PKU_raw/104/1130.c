void a(int m);
void b(int m);
int sqrt(int i);
int c(void);
int x[15]={0},y[15]={0};
int o,p;
int main()
{
	int m,n,k;
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("%d\n",n);
		return 0;
	}
	o=m;
	p=n;
	if(m==1||n==1)
	{
		printf("1\n");
		return 0;
	}
	a(m);
	b(n);
	printf("%d\n",c());
	return 0;
}
void a(int m)
{
	int i,n;
	for(i=0;i<15;i++) x[i]=0;
	for(i=0;i<15;i++)
	{
		if(m<sqrt(i))
		{
			n=i;
			break;
		}
	}
	x[n-1]=o;
	for(i=n-2;i>=0;i--)
	{
		if(m%2==0)
		{
			x[i]=m/2;
			m=m/2;
			continue;
		}
		if(m%2==1)
		{
			x[i]=(m-1)/2;
			m=(m-1)/2;
			continue;
		}
	}
}
void b(int m)
{
	int i,n;
	for(i=0;i<15;i++) y[i]=0;
	for(i=0;i<15;i++)
	{
		if(m<sqrt(i))
		{
			n=i;
			break;
		}
	}
	y[n-1]=p;
	for(i=n-2;i>=0;i--)
	{
		if(m%2==0)
		{
			y[i]=m/2;
			m=m/2;
			continue;
		}
		if(m%2==1)
		{
			y[i]=(m-1)/2;
			m=(m-1)/2;
			continue;
		}
	}
}
int sqrt(int i)
{
	int m=1,j;
	for(j=1;j<=i;j++)
	{
		m=m*2;
	}
	return m;
}
int c(void)
{
	int i,k=1;
	for(i=0;i<15;i++)
	{
		if(x[i]==y[i]) k=i;
		if(x[i]!=y[i]||x[i]==0) break;
	}
	return x[k];
}