int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=(a%100-a%10)/10;
	d=(a%1000-a%100)/100;
	e=(a-a%1000)/1000;
	if(e)
		printf("%d%d%d%d",b,c,d,e);
	else
		if(d)
			printf("%d%d%d",b,c,d);
		else
		if(c)
			printf("%d%d",b,c);
		else
			printf("%d",b);
	return 0;
}