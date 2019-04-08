int main()
{
	int n, i, s;
	scanf("%d", &n);
	int a[6];
	a[0]=100;
	a[1]=50;
	a[2]=20;
	a[3]=10;
	a[4]=5;
	a[5]=1;
	i=0;
	int b[6];
	s=n;
	for(i=0; i<=5; i++)
	{
		b[i]=(s-s%a[i])/a[i];
		s=s-b[i]*a[i];
		printf("%d\n", b[i]);
	}
	return 0;
}