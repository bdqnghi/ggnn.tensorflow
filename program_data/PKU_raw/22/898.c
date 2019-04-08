int main()
{
	int e,a,b,c=0,h=1,x=1,m=0;
	char g;
	char f;
	scanf("%d%c",&e,&f);
	if(f!=',')
	{
		printf("No");
	}
	else
	{
		b=e;
		for(g=',';g==','; )
		{
			scanf("%d%c",&a,&g);
			if(a!=b)
			{
				h=0;
			}
			if(a>b)
			{
				c=b;
				b=a;
				x=0;
			}
			if(b>a&&a>c)
			{
				c=a;
				x=0;
			}
			if(m<=a&&a!=b)
			{
				m=a;
			}
		}
		if(h==1)
		{
			printf("No\n");
		}
		else if(x==1)
		{
			printf("%d\n",m);
		}
		else if(x==0)
		{
			printf("%d\n",c);
		}
	}
	return 0;
}

		




			

		
