int main()
{
	int m,n,p;
	int i=1;
	scanf("%d",&n);
	if (n<10)
	   p=1;
    else if (n<100)
       p=2;
    else if (n<1000)
       p=3;
    else if (n<10000)
       p=4;
	do
	{
		m=n%10;
		printf("%d",m);
		n=n/10;
		i++;
	}while(i<=p);
	return 0;
}
