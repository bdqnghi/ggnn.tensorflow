main()
{
	int a[5],b,c;
	a[0]=100;a[1]=50;a[2]=20;a[3]=10;a[4]=5;
	scanf ("%d",&b);
	for (int i=0;i<=4;i++)
	{
		c=b/a[i];
		b=b-c*a[i];
		printf ("%d\n\n",c);
		}
		printf ("%d",b);
}