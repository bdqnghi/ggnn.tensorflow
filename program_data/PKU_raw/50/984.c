void main()
{
	int a[12],i,j=0,month,day,d,w;
	scanf("%d",&w);
	for(month=1;month<=12;month++)
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) day=31;
		else if(month==4||month==6||month==9||month==11) day=30;
		else if(month==2) day=28;
		for(d=1;d<=day;d++)
		{
			if(d==13)
			{
				if(w==5)
				{
					a[j]=month;
					j++;
				}
				w++;
				if(w==8)
				{
					w=1;
				}
			}
			else if(d!=13)
			{
				w++;
				if(w==8)
				{
					w=1;
				}
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d\n",a[i]);
	}
}