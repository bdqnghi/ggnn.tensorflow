void main()
{
	char n[35]={'0'},y[35]={'0'};
	unsigned long r,x1,x=1;
	int i,a,b,x2=0,y1,p,q,xm=0,k;
	scanf("%d%s%d",&a,n,&b);
    unsigned long m=0;
	p=strlen(n);
	r=pow(a,p-1);

	for(i=0;i<p;i++)
	{
	
		if(n[i]>47&&n[i]<58)
		{
			q=n[i]-48;
			m=m+q*r;
		
		}
		else
		{
			if(n[i]>64&&n[i]<91)
			{
				q=n[i]-55;
				m=m+q*r;
				
			}
			else if(n[i]>96&&n[i]<123)
				{
						q=n[i]-87;
				m=m+q*r;
			
				}
		}
		r=r/a;
	}

	while((m/b)>x)
	{
		x=b*x;
		xm=xm+1;
	}

	y1=0;

	for(i=xm;i>=0;i--)
	{
		
		k=m%b;
		if(k<10)
		y[i]=k+48;
		else y[i]=k+55;
		m=(m-k)/b;
	
	
	}
	printf("%s",y);
}