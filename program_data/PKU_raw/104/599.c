int f(int t)
{
	int c=0;
	if(t==0)
		c=1;
	if(t>0)
		c=f(t-1)*2;
	return c;
}
void main()
{
	int i,a[11],b[11],m,n,x,y;
	scanf("%d%d",&x,&y);
	for(i=0;i<11;i++)
	{
		if((x>=f(i))&&(x<f(i+1)))
		{
			a[i]=x-f(i)+1;
			n=i;
		}
	}
	for(i=n;i>0;i--)
	{
		if(a[i]%2==0)
			a[i-1]=a[i]/2;
		else a[i-1]=a[i]/2+1;
	}
	for(i=0;i<11;i++)
	{
		if((y>=f(i))&&(y<f(i+1)))
		{
			b[i]=y-f(i)+1;
			m=i;
		}
	}
	for(i=m;i>0;i--)
	{
		if(b[i]%2==0)
			b[i-1]=b[i]/2;
		else b[i-1]=b[i]/2+1;
	}
	if(x==y)
		printf("%d",x);

	if(m<n)
		m=n;
	for(i=0;i<=m;i++)
	{
		if(a[i]!=b[i])
		{
			printf("%d",f(i-1)+a[i-1]-1);
			break;
		}
	}
}

