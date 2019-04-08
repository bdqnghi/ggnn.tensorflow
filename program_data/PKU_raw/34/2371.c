
int main()
{
	int a=0,b=0;
	scanf("%d",&a);
	if (a==1) printf("End\n");
	else
	{
	do
	{
		if (a%2==0) 
		{
			b=a/2;
			printf("%d",a);printf("/2=");printf("%d\n",b);
		}
		else 
		{
			b=a*3+1;
			printf("%d",a);printf("*3+1=");printf("%d\n",b);
		}

		a=b;
		b=0;
	}
	while (a!=1);
	if (a==1) printf("End\n");
	}
	return 0;
}
