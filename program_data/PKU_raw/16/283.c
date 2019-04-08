int main()
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n%1000)/100;
	d=(n%100)/10;
	e=n%10;
	if(a!=0)
		printf("00001\n");
	else if(b!=0)
	{if(e!=0)
	printf("%d\n",e*1000+d*100+c*10+b);
	else if(d!=0)
		printf("0%d\n",d*100+c*10+b);
	else if(c!=0)
		printf("00%d\n",c*10+b);
	else
		printf("000%d\n",b);
	}
	else if(c!=0)
	{if(e!=0)
	printf("%d\n",e*100+d*10+c);
	else if(d!=0)
		printf("0%d\n",d*10+c);
	else
		printf("00%d\n",c);
	}
	else if(d!=0)
	{if(e!=0)
	printf("%d\n",e*10+d);
	else 
		printf("0%d\n",d);
	}
	else
		printf("%d\n",n);
	return 0;
}
		




	

	
		


	