void main()
{
	int n;
	scanf ("%d",&n);
	int a[2],s=0,x=0,i=0;
	for (i=1;i<=n;i++)
	{
		x=i;
		a[0]=x%10;
		a[1]=x/10;
		if (i%7==0||a[0]==7||a[1]==7)
		{
			continue;
			i++;
		};
		s=s+i*i;
	}
	printf ("%d\n",s);
}
