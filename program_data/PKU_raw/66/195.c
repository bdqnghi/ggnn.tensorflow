int main(int argc, char* argv[])
{
	int i,a,b,c,d=0,e,f,g;
	scanf("%d%d%d",&a,&b,&c);
	f=a%2000;
	g=a/2000;
	
	if(g==0)
	{for(i=1;i<a;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			d=d+366;
		}
		else
			d=d+365;
	}
	for(i=1;i<b;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			d=d+31;
		else if(((a%100!=0&&a%4==0)||(a%400==0))&&i==2)
			d=d+29;
		else if(i==2)
			d=d+28;
		else d=d+30;
	}
	d=d+c;}
	else 
	{
		for(i=g*2000;i<a;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			d=d+366;
		}
		else
			d=d+365;
	}
	for(i=1;i<b;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			d=d+31;
		else if(((a%100!=0&&a%4==0)||(a%400==0))&&i==2)
			d=d+29;
		else if(i==2)
			d=d+28;
		else d=d+30;
	}
	d=d+c-2;
	}
	
	e=d%7;
	switch(e){
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
	case 0:
		printf("Sun.");
		break;
	}
	return 0;
}

