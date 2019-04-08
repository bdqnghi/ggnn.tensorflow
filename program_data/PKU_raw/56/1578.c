void main()
{
	long m,n;
	int a,b,c,d,e;
	scanf("%ld",&n);
	if(n>=10000)
	{
		a=n/10000;
		b=(n-10000*a)/1000;
		c=(n-10000*a-1000*b)/100;
		d=(n-10000*a-1000*b-100*c)/10;
		e=n%10;
		m=10000*e+1000*d+100*c+10*b+a;
	}
		else if(n>=1000)
		{
			b=n/1000;
			c=(n-1000*b)/100;
			d=(n-1000*b-100*c)/10;
			e=n%10;
			m=1000*e+100*d+10*c+b;
		
		}
			else if(n>=100)
			{
			
				c=(n)/100;
				d=(n-100*c)/10;
				e=n%10;
				m=100*e+10*d+c;
			
			}
				else if(n>=10)
				{
				
					d=n/10;
					e=n%10;
					m=10*e+d;
				
				}
				else m=n;
		
	printf("%d\n",m);
}