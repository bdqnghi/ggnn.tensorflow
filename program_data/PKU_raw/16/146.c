int main()
{
	int a,b,c,d,f;
	scanf("%d",&a);
	if(a/10==0)
	{
		printf("%d",a);
	}
	else if(a/100==0)
	{
		b=a/10;
	c=a%10;
	printf("%d%d",c,b);
	}
		else if(a/1000==0)
		{
		b=a/100;
	c=(a-b*100)/10;
		d=a%10;
	printf("%d%d%d",d,c,b);
		}
	else if(a/10000==0)
	{
		b=a/1000;
	c=(a-b*1000)/100;
	d=(a-b*1000-c*100)/10;
	f=a%10;
	printf("%d%d%d%d",f,d,c,b);
	}
	return 0;
}
