int main()
{
	int i,y,m,d,sum=0;
	scanf("%d%d%d",&y,&m,&d);
	y=y%400;
	if(y==0)
		y=400;
	for(i=1;i<y;i++)
	{
		if(i%4==0&&i%100!=0||i==400)
		    sum+=2;
		else
			sum++;
	}
	for(i=1;i<m;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			sum+=3;
		else if(i==4||i==6||i==9||i==11)
			sum+=2;
		else 
		{
			if(y%4==0&&y%100!=0||y==400)
               sum++;
		}
	}
	sum+=d;
	sum%=7;
	switch(sum)
	{
	case 0:
		printf("Sun.");
		break;
	case 1:		
		printf("Mon.");
		break;
	case 2:	
		printf("Tue.");
		break;
	case 3:	
	    printf("Wen.");
		break;
	case 4:	
		printf("Thu");
		break;
	case 5:	
    	printf("Fri.");
		break;
	case 6:
    	printf("Sat.");
		break;
	}
	return 0;
}