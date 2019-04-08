int main()
{
	int y,m,d,t=0,i;
	scanf("%d%d%d",&y,&m,&d);
	if(m==1)
	{
		t+=d;
	}
	else if(m==2)
	{
		t+=31+d;
	}
	else if((y%4==0&&y%100!=0)||(y%400==0))
	{
		
		for(i=1;i<m;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10)
			{
				t=t+31;
			}
			if(i==4||i==6||i==9||i==11)
			{
				t=t+30;
			}
			if(i==2)
			{
				t+=29;
			}
		}
		t=t+d;
	}
	else 
	{
        for(i=1;i<m;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10)
			{
				t=t+31;
			}
			if(i==4||i==6||i==9||i==11)
			{
				t=t+30;
			}
			if(i==2)
			{
				t+=28;
			}
		}
		t=t+d;
	}
	printf("%d",t);
	return 0;
}


			


	
