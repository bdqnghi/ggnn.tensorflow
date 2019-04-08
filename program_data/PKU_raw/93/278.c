int main()
{
	int x;
	scanf("%d",&x);
	int a,b,c;
	a=x%3;
	b=x%5;
	c=x%7;
	if(a==0&&b==0&&c==0)
		printf("3 5 7");
	else
	{
	x=x;
	}
	if(a!=0&&b==0&&c==0)
		printf("5 7");
	else
    {
	x=x;
	}
	if(a==0&&b!=0&&c==0)
		printf("3 7");
	else
	{
	x=x;
    }
	if(a==0&&b==0&&c!=0)
		printf("3 5");
	else
    {
	x=x;
	}
	if(a!=0&&b!=0&&c==0)
		printf("7");
	else
	{
	x=x;
	}
	if(a!=0&&b==0&&c!=0)
		printf("5");
	else
	{
	x=x;
	}
	if(a==0&&b!=0&&c!=0)
		printf("3");
	else
	{
	x=x;
	}
	if(a!=0&&b!=0&&c!=0)
		printf("n");
	else
	{
	x=x;
	}
    return 0;
}