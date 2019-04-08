void main()
{
	int w,i;
	int a[13];
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	a[0]=w;
	a[1]=a[0]+12;
	for(i=2;i<13;i++)
	{
		a[i]=a[i-1]+b[i-2];
	}
	for(i=1;i<13;i++)
	{
		if(a[i]%7==5)
			printf("%d\n",i);
	}
}
