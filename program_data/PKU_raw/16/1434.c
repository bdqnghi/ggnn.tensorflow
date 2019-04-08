void main()
{
	int x,a,b,c,d,e,m,n,o,p;
	scanf("%d",&x);
	m=x/10000;
	n=x/1000;
	o=x/100;
	p=x/10;
		if(m!=0)
		{
		a=m;
		b=n-10*a;
		c=o-100*a-10*b;
		d=p-1000*a-100*b-10*c;
		e=x%10;
		printf("%d%d%d%d%d",e,d,c,b,a);
		}
	else 
		if(n!=0)
		{
			a=n;
			b=o-10*a;
			c=p-100*a-10*b;
			d=x%10;
			printf("%d%d%d%d",d,c,b,a);
		}
		else if(o!=0)
		{	
				a=o;
				b=p-10*o;
				c=x%10;
				printf("%d%d%d",c,b,a);
		}
			else if(p!=0)
			{
					a=p;
					b=x%10;
					printf("%d%d",b,a);
			}
			else {
			printf("%d",x);}
}
