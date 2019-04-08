int main()
{
	int n,y,r,k,i,sum=0,x;
	scanf("%d%d%d",&n,&y,&r);
	n=n%2800;
	for(i=1;i<n;i++)
	{
		if(i%100!=0&&i%4==0||i%400==0)
		{
			sum+=366;
		}
		else 
		{
			sum+=365;
		}
	}
	for(k=1;k<y;k++)
	{
		if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
		{
			sum+=31;
		}
		if(k==4||k==6||k==9||k==11)
		{
			sum+=30;
		}
		if(k==2)
		{
			if(n%100!=0&&n%4==0||n%400==0)
			{
				sum+=29;
			}
			else 
			{
				sum+=28;
			}
		}
	}
	sum+=r;
	switch(x=sum%7)
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

 

