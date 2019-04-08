int a(int x,int y)
{
	int a[300],i,p,b=1;
	for(i=0;i<x;i++)
		a[i]=i+1;
	while(x>1)
	{
	p=y%x;
	b=b-1+p;
	if(b==0)
	{
		x=x-1;
		b=b+1;
		}
	else if(b<=x&&b>0)
	{
		for(i=b-1;i<x-1;i++)
			a[i]=a[i+1];
		x=x-1;
	}
	else if(b>x)
	{
		b=b-x;
		for(i=b-1;i<x-1;i++)
			a[i]=a[i+1];
		x=x-1;
	}
	}
	return(a[0]);
	
}
void main()
{
	int a(int x,int y),n[100],m[100],c[100],k;
	for(k=0;k<100;k++)
	{
		scanf("%d%d",&n[k],&m[k]);
		if(n[k]==0&&m[k]==0)
			break;
	}
	for(k=0;n[k]!=0;k++)
		c[k]=a(n[k],m[k]);
	for(k=0;n[k]!=0;k++)
		printf("%d\n",c[k]);
}





	