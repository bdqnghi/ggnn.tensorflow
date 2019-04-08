int m,n,i,j,a[1000],b[1000],c[2000],s,t;
void one()
{
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
}

void two()
{
	for(j=0;j<m-1;j++)
		for(i=0;i<m-1-j;i++)
			if(a[i]>a[i+1])
			{
				s=a[i];
				a[i]=a[i+1];
				a[i+1]=s;
			}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
}
void three()
{
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=m;i-m<n;i++)
		c[i]=b[i-m];
}
void four()
{
	printf("%d",c[0]);
	for(i=1;i<m+n;i++)
	printf(" %d",c[i]);
}
void main()
{
	one();
	two();
	three();
	four();
}