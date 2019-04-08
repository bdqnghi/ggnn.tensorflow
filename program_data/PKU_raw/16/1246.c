
void main()
{
	int a,b,c;
	scanf("%d",&a);
	if (a<10)
		printf("%d",a);
	else 
		{
while (a/10!=0)
		{
			b=a/10;
			c=a-10*b;
			printf("%d",c);
			a=b;
		}
		printf("%d",a);
}
}
