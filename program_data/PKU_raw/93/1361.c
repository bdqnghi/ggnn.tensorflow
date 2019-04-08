int main()
{
	int z;
	int a=0,b=0,c=0;
	scanf("%d",&z);
	if(z%3==0)
		a=3;
	if(z%5==0)
		b=5;
	if(z%7==0)
		c=7;
	if(a!=0) 
		printf("%d",a);
	if(b!=0)
		{if(a!=0)
			printf(" %d",b);
		else
		    printf("%d",b);}
	if(c!=0)
		{if(a!=0 || b!=0)
			printf(" %d",c);
		else
		    printf("%d",c);}
	if(a+b+c==0)
		printf("n");
	return 0;
}