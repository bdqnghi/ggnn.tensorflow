void main()
{
	int w,week[366],i,j,k,month[12]={31,28,31,30,31,30,31,31,30,31,30,31},num[12];
	scanf("%d",&w);
	week[0]=w;
	for(i=1;i<365;i++)
	{
		if(i%7==1)
			week[i]=w+1;
		else if(i%7==2)
			week[i]=w+2;
		else if(i%7==3)
			week[i]=w+3;
		else if(i%7==4)
			week[i]=w+4;
		else if(i%7==5)
			week[i]=w+5;
		else if(i%7==6)
			week[i]=w+6;
		else if(i%7==0)
			week[i]=w;
	}
	for(i=0;i<365;i++)
	{
		if(week[i]>7)
			week[i]=week[i]-7;
	}
	for(j=0;j<12;j++)
	{
		num[j]=13;
		for(k=0;k<j;k++)
			num[j]+=month[k];
	}
	for(i=0;i<365;i++)
	{
		for(j=0;j<12;j++)
		{
			if(i==num[j]-1&&week[i]==5)
			    printf("%d\n",j+1);
		}
	}
}
