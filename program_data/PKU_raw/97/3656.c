int main()
{
	int n,i,r;
	scanf ("%d",&n);
	int a[10];
	int b[10];
	a[1]=100;
	a[2]=50;
	a[3]=20;
	a[4]=10;
	a[5]=5;
	a[6]=1;
	for (i=1;i<7;i++)
	{
		r=n%a[i];
		b[i]=(n-r)/a[i];
		n=r;
		printf("%d\n",b[i]);
	}
	return 0;
}
