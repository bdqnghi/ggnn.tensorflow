void main()
{	
	void sel(int x);
	int sus(int p);
	int hui(int q);
	int a[100],i,j,k,m,n,sing=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	if(sus(i)==1&&hui(i)==1)
	{printf("%d",i);break;}
	if(i==n+1)
		printf("no");
	for(i=i+1;i<=n;i++)
	 sel(i);	
}
void sel(int x)
{
	int sus(int p);
	int hui(int q);
	if(sus(x)==1&&hui(x)==1)
	printf(",%d",x);
}
int sus(int p)
{
	int i,j,k,m,n;
	for(i=2;i<p;i++)
		if(p%i==0)
			break;
	if(i==p)
	return(1);
	else return(0);
}

int hui(int q)
{
	int i,j,k,m,n,b=0,a[1000],c[1000];
	for(i=0;;i++)
		if(pow(10,i)>q)
		{n=i;break;}				//q?n??//
	for(i=1;i<=n;i++)
		c[i]=pow(10,i);
	for(i=1;i<=n;i++)
		a[i]=(q%c[i])/(pow(10,i-1));
	for(i=1,j=n-1;i<=n,j>=0;i++,j--)
		b=b+a[i]*pow(10,j);
	if(q==b)
		return(1);
	else return(0);		
}


