void main()
{
	int w,i;
	int a[13];
	scanf("%d",&w);
	a[1]=w+12%7;
	if(a[1]>7)
		a[1]=a[1]-7;
	for(i=2;i<=12;i++)
	{
		if(i==2||i==4||i==6||i==8||i==9||i==11)
		{
			a[i]=a[i-1]+31%7;
		}
		if(i==3)
		{
			a[i]=a[i-1]+28%7;
		}
		if(i==5||i==7||i==10||i==12)
		{
			a[i]=a[i-1]+30%7;
		}
		if(a[i]>7)
		a[i]=a[i]-7;
	}
	for(i=1;i<=12;i++)
	{
		if(a[i]==5)
			printf("%d\n",i);
	}
}