void main()
{
	int a,b,c,n,i;
	float d,e;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<=(n-2);i++)
	{
		scanf("%d",&c);
		d=(float)(a+b)/2;
		e=(float)(a-b)/2;
		if(c>=a)
		{
			if(c>=b)
			{a=c;
			b=d-e;
			c=d+e;
			}
		else {a=d-e;
			b=d+e;
			c=c;
			}
		}
			else 
			{if(a<=b)
				{a=d-e;
				b=d+e;
				c=c;}
			else {a=d+e;
				b=d-e;
				c=c;
				}
			}	
		if(b>=c)b=b;
		else b=c;
	}
	printf("%d\n%d",a,b);
}
