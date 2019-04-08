int f(int n)
{
	if(n==1)
		return (-1);
	else
	{int i,a[10],c=0,f=0,m,x;
	m=n;
	while (n>0)
	{
		a[c++]=n%10;
		n=n/10;
	}
	for(i=0;i<c;i++)
	{
		if(a[i]!=a[c-i-1])
		{
			f=1;
			x=0;
		}
	}
	if (f==0)
	{   
		x=1;
		for(i=2;i<(m/2+1);i++)
		{
			if (m%i==0)
				x=0;
		}
	}
	if (x==1)
	{	
		return m;
	}
	else return (-1);
	}
}


void main()
{
    int f(int n);
	int m,n,i,a[100000],l=0,x=0,b[100000];
	scanf("%d %d",&m,&n);
    for(i=0;i<100000;i++)
	{
		a[i]=-1;
		b[i]=-1;
	}
	for (i=m;i<=n;i++)
	{
	    a[l]=f(i);
		l++;
	}
	for (i=0;i<=(n-m);i++)
	{
		if(a[i]!=-1)
		{
			b[x]=a[i];
			x++;
		}
	}
	
	if(x!=0)
	{
	     for (i=0;i<(x-1);i++)
		 { 
		    printf("%d,",b[i]);
		 }
	        printf("%d\n",b[x-1]);
	}
	else printf("no\n");
}
	
	
	
