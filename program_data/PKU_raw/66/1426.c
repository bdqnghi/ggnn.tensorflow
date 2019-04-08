int main()
{
	int i,m,n,j,k=0,a,b,c,num=0;
	scanf("%d%d%d",&a,&b,&c);
	m=a/400;
	a=a%400;
	if(a==0)
	{
		num+=5;
	}
	for(i=1;i<a;i++)
	{
		if(i%400==0||(i%4==0&&i%100!=0))
		{
			num+=2;
		}
		else
		{
			num+=1;
		}
	}
	for(j=1;j<b;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10)
		{
			num+=3;
		}
		if(j==2)
		{
			if(a%400==0||(a%4==0&&a%100!=0))
		{
			num+=1;
		}
		else
		{
			num+=0;
		}
		}
		if(j==4||j==6||j==9||j==11)
		{
			num+=2;
		}
	}
	num+=c;
	k=num%7;
	switch(k)
	{
	case 1:
		{
			printf("Mon.");
			break;
		}
	case 2:
		{
			printf("Tue.");
			break;
		}
	case 3:
		{
			printf("Wed.");
			break;
		}	
	case 4:
		{
			printf("Thu.");
			break;
		}
	case 5:
		{
			printf("Fri.");
			break;
		}
	case 6:
		{
			printf("Sat.");
			break;
		}
	case 0:
		{
			printf("Sun.");
			break;
		}
	}
	return 0;
}