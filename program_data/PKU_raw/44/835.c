int fanxu(int n)
{
	int a,b,c,d,e,j,k;
	if(n>0)
		j=1;
	else
		j=0;
	n=abs(n);
	if(n/10000!=0)
	{
		a=n/10000;
		b=(n/1000)-10*a;
		c=(n/100)-10*b-100*a;
		e=n%10;
		d=(n%100)/10;
		k=10000*e+1000*d+100*c+10*b+a;
	}
	else
	{
		if(n/1000!=0)
		{
			a=n/1000;
			b=(n/100)-10*a;
			d=n%10;
			c=(n%100)/10;
			k=1000*d+100*c+10*b+a;
		}
		else
		{
			if(n/100!=0)
			{
				a=n/100;
				b=(n/10)-10*a;
				c=n%10;
				k=c*100+b*10+a;
			}
			else
			{
				if(n/10!=0)
				{
					a=n/10;
					b=n%10;
					k=b*10+a;
				}
				else
					k=n;
			}
		}
	}
	if(j)
		return(k);
	else
		return(k*(-1));
}
void main()
{
	int i,n;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&n);
		printf("%d\n",fanxu(n));
	}
}

	
			













