void main()
{
	int a,b,c;
	scanf("%d",&a);
	b=0;
	for(c=a%10;a>0;)
	{
		b=b*10+c;
		a=(a-c)/10;
		c=a%10;
	}
	printf("%d",b);
}
	
