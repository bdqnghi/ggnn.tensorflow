main()
{
	int x,a,b,c,d,e,f;
	scanf("%d",&x);
    a=x/100;
	b=x%100/50;
	c=x%100%50/20;
	d=x%100%50%20/10;
	e=x%100%10/5;
	f=x%100%10%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0; 
}