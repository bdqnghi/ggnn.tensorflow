int main()
{
	int i,y,m,d,D;
	int total=0;
	
	scanf("%d%d%d",&y,&m,&d);
	for(i=1;i<m;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			total=total+31;
		}
	     else if(i==4||i==6||i==9||i==11)
		{
			total=total+30;
		}
		else
		{
			if(y%4==0&&y%100!=0||y%400==0)
			{
				total=total+29;
			}
			else
			{
				total=total+28;
			}
		}
	}
	D=total+d;
	printf("%d",D);
	return 0;
}