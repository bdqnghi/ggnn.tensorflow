int main()
{
	int a,b;
    scanf("%d",&a);
	b=0;
	while(a)
	{
		b=a%10;
		printf("%d",b);
        a=a/10;
	}
	return 0;
}
