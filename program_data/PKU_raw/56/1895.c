void main()
{
	int a;
	int c1,c2,c3,c4,c5;
	int d1,d2,d3,d4,d5;
	scanf("%d",&a);
	c1=a/10000; d1=a%10000;
	c2=d1/1000; d2=d1%1000;
	c3=d2/100;  d3=d2%100;
	c4=d3/10;   d4=d3%10;
	c5=d4;
	if(c5) printf("%d",c5);
	if(c4) printf("%d",c4);
	if(c3) printf("%d",c3);
	if(c2) printf("%d",c2);
	if(c1) printf("%d",c1);
}

