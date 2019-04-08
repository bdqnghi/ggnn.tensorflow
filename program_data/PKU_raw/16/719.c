int main()
{
	int x,a,b,c,d,e,n;
	scanf("%d",&x);
	if(x==0)
		printf("0");
	n=(int)log10((double)x);
	a=x/10000;
	x=x-a*10000;
	b=x/1000;
	x=x-b*1000;
	c=x/100;
	x=x-c*100;
	d=x/10;
	e=x-d*10;

	switch(n)
	{
		case 0:printf("%d",e);break;
		case 1:printf("%d%d",e,d);break;
		case 2:printf("%d%d%d",e,d,c);break;
		case 3:printf("%d%d%d%d",e,d,c,b);break;
		case 4:printf("%d%d%d%d%d",e,d,c,b,a);
	}

	return 0;
}
