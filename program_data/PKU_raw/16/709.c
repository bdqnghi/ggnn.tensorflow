int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	d=a%10;//??
	b=(a%1000-a%100)/100;//??
	c=(a%100-d)/10;//??
	e=(a%10000-a%1000)/1000;
	if(a>=1000)
printf("%d%d%d%d\n",d,c,b,e);
	else if(a>=100)
	{
		printf("%d%d%d\n",d,c,b);
	}
	else if(a>=10)
		printf("%d%d\n",d,c);
	else
		printf("%d\n",d);
	return 0;
}