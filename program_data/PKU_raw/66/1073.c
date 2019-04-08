int runnian(int y);
int main()
{
    int i;
    int y2,m2,d2;
	/*?y,m,d??(year,month,date)???,sum???????,p,q?????*/
    int sum=0;
    scanf("%d%d%d",&y2,&m2,&d2);
	while(y2>(7*400))
	{
		y2=y2%(7*400);
	}
    for(i=1;i<y2;i++)
	{
		if(runnian(i))
		{
			sum+= 366;
		}
		else
		{
			sum+=365;
		}
	}
    for(i=1;i<m2;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			sum += 31;
		}
		else if (i==4||i==6||i==9||i==11)
		{
			sum += 30;
		}
		else if(i == 2)
		{
			if(runnian(y2))
			{
				sum += 29;
			}
			else
			{
				sum += 28;
			}
		}
	}
	sum+=d2;
	sum-=1;
	sum=sum%7;
	switch(sum)
	{
	case 0:printf("Mon.");
		break;
	case 1:printf("Tue.");
		break;
	case 2:printf("Wed.");
		break;
	case 3:printf("Thu.");
		break;
	case 4:printf("Fri.");
		break;
	case 5:printf("Sat.");
		break;
	case 6:printf("Sun.");
		break;
	}
	return 0;
}

int runnian(int y){
    if((y%400==0)||(y%4==0 && y%100!=0))
    return 1;
    return 0;
}


