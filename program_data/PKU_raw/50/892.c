int main()
{
	int w,i,j,flag;
	int day[12][31]={0};
	int date[366];
    scanf("%d",&w);
	for(i=0;i<365;i++)
	{
			if(w+i<8)
			date[i]=w+i-1;
	}
	for(flag=0;flag<365;flag++)
	{
		date[flag+8-w]=flag%7;
	}
	flag=0;
	for(i=0;i<12;i++)
	{
        for(j=0;j<31;j++)
		{
		    if(i==1&&j>27)
				continue;
			else if(i==3&&j>29)
				continue;
			else if(i==5&&j>29)
				continue;
			else if(i==8&&j>29)
				continue;
			else if(i==10&&j>29)
				continue;
			else day[i][j]=date[flag];
			flag++;
		}
	}
	for(i=0;i<12;i++)
	{
		for(j=0;j<31;j++)
		{
			if(j==12&&day[i][j]==4)
				printf("%d\n",i+1);
		
		}
	}
	getchar();getchar();
	return 0;
}
