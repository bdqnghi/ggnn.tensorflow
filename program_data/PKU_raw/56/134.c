int main()
{
	int a,b;
	b=0;
	scanf("%d",&a);
    if(a<9)
	{
		printf("%d",a);
	}
	while(a>9)
	{
      b=(b+a-a/10*10)*10;
       a=a/10;
	}
		printf("%d",b+a);
	return 0;
}