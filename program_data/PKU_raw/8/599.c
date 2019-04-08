int m,n,a[1000],b[1000],c[2000],s,t;
void input()
{
	scanf("%d %d",&m,&n);
	for(s=0;s<m;s++)
		scanf("%d",&a[s]);
	for(s=0;s<n;s++)
		scanf("%d",&b[s]);
}

void order()
{
	int k;
	for(s=1;s<m;s++)
		for(t=0;t<m-s;t++)
			if(a[t]>a[t+1])
			{
				k=a[t];
				a[t]=a[t+1];
				a[t+1]=k;
			}
	for(s=1;s<n;s++)
		for(t=0;t<n-s;t++)
			if(b[t]>b[t+1])
			{
				k=b[t];
				b[t]=b[t+1];
				b[t+1]=k;
			}
}

void add()
{
	for(s=0;s<m;s++)
		c[s]=a[s];
	for(s=m,t=0;s<m+n;s++,t++)
		c[s]=b[t];
}

void output()
{
	for(s=0;s<m+n;s++)
	{
		if(s!=m+n-1)printf("%d ",c[s]);
		else printf("%d",c[s]);
	}
}

int main()
{
	input();
	order();
	add();
	output();
	return 0;
}