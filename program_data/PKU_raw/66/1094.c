int main()
{
	int year,month,day,i,c,b;
	b=0;
	scanf("%d%d%d",&year,&month,&day);
    if((year-1)%400!=0){
		for(i=1;i<=(year-1)%400;i++)
		{
			if(i%4==0&&i%100!=0){
				b+=366;
			}else{
				b+=365;
			}
		}
	}
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			b+=31;
		}else{
			if(i==4||i==6||i==9||i==11){
				b+=30;
			}else{
				if(year%400==0||(year%4==0&&year%100!=0)){
					b+=29;
				}else{
					b+=28;
				}
			}
		}
	}
	b+=day;
	c=b%7;
	switch(c)
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
		printf("Wed.");
		break;
	case 4:
		printf("Thu.");
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