void main()
{
	int w,i;
	int day(int x);
	scanf("%d",&w);
	for(i=1;i<=12;i++)
	{
		if(w<=5)
		{
     if(day(i)%7==(5-w))
		 printf("%d\n",i);
		}
		else if(w==7)
		{
        if(day(i)%7==5)
		 printf("%d\n",i);
		}
		else
        if(day(i)%7==6)
		 printf("%d\n",i);
	}
}

int day(int x)
{
	int i,sum=0,a[12];
	if(x==1)
		sum=0;
	else
	{
	for(i=1;i<=(x-1);i++)
	{
		if(i==1)
			a[i]=31;
		else if(i==3||i==5||i==7||i==8||i==10||i==12)
			a[i]=31;
		else if(i==4||i==6||i==9||i==11)
			a[i]=30;
		else a[i]=28;
		sum=sum+a[i];
    }
	}
	return (sum+12);
}