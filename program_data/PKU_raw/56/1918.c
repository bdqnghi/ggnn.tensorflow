void main()
{
	int num,a,b,c,d,e;
	scanf("%d",&num);
	a=num/10000;
	b=num/1000-a*10;
	c=num/100-100*a-10*b;
	d=num/10-1000*a-100*b-10*c;
	e=num-a*10000-b*1000-c*100-d*10;
	if(a!=0)
		printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0)
		printf("%d%d%d%d",e,d,c,b);
	else if(c!=0)
		printf("%d%d%d",e,d,c);
	else if(d!=0)
		printf("%d%d",e,d);
	else if(e!=0)
		printf("%d",e);
	else 
		printf("0");
}