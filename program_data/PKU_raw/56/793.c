void main()
{
	int a[5],A,b,c,i;
	scanf("%d",&A);
	b=A;
	for(c=0;b>=1;c++)
	{
		b=b/10;
	}
	for(i=0;i<=c-1;i++)
	{
		a[i]=A%10;
		A=A/10;
	}
	for(i=0;i<=c-2;i++)
	{	printf("%d",a[i]);
	}
     printf("%d\n",a[c-1]);
}