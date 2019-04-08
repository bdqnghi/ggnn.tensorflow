
int main()

{
	int x,a,b,c,d,e;
	scanf("%d",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if(a)
		printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b)
		printf("%d%d%d%d",e,d,c,b);
	else if(c)
		printf("%d%d%d",e,d,c);
	else if(d)
		printf("%d%d",e,d);
	else
		printf("%d%",e);
	


	return 0;
	
}
