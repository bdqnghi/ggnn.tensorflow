
int main()
{
	int a,b,c;
	a=b=c=0;
	int n;
	scanf("%d",&n);
	a=n/100;
	b=n/10-a*10;
	c=n-a*100-b*10;
	printf("%d\n",a);
	if(b==9)
	{
	printf("%d\n",1);
	printf("%d\n",2);
	printf("%d\n",0);

	
	}
	else	if(b==8)
	{
	printf("%d\n",1);
	printf("%d\n",1);
	printf("%d\n",1);

	
	}
	else		if(b==7)
	{
	printf("%d\n",1);
	printf("%d\n",1);
	printf("%d\n",0);

	
	}
	else			if(b==6)
	{
	printf("%d\n",1);
	printf("%d\n",0);
	printf("%d\n",1);

	
	}
	else				if(b==5)
	{
	printf("%d\n",1);
	printf("%d\n",0);
	printf("%d\n",0);

	
	}
	else	if(b==4)
	{
	printf("%d\n",0);
	printf("%d\n",2);
	printf("%d\n",0);

	
	}
	else	if(b==3)
	{
	printf("%d\n",0);
	printf("%d\n",1);
	printf("%d\n",1);

	
	}
	else if(b==2)
	{
	printf("%d\n",0);
	printf("%d\n",1);
	printf("%d\n",0);

	
	}
	else if(b==1)
	{
	printf("%d\n",0);
	printf("%d\n",0);
	printf("%d\n",1);

	
	}
	else if(b==0)
	{
	printf("%d\n",0);
	printf("%d\n",0);
	printf("%d\n",0);

	
	}
    if(c>=5)
	{
		printf("%d\n",1);
		c=c-5;
		printf("%d\n",c);

	
	}
	else	{	printf("%d\n",0);		printf("%d\n",c);}

	return 0;
}
