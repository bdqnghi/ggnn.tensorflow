
int main()
{
	int y1,y2,m1,m2,d1,d2,i,t1,t2;
	int t=0;
	scanf("%d %d %d\n",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	if(y1==y2)
	{
		if(m2==1)
		{
			t2=t+d2;
		}
		else if(m2==2)
		{
			t2=t+31+d2;
		}
		else if(m2==3)
		{
			t2=t+59+d2;
		}
		else if(m2==4)
		{
			t2=t+90+d2;
		}
		else if(m2==5)
		{
			t2=t+120+d2;
		}
		else if(m2==6)
		{
			t2=t+151+d2;
		}
		else if(m2==7)
		{
			t2=t+181+d2;
		}
		else if(m2==8)
		{
			t2=t+212+d2;
		}
		else if(m2==9)
		{
			t2=t+243+d2;
		}
		else if(m2==10)
		{
			t2=t+273+d2;
		}
		else if(m2==11)
		{
			t2=t+304+d2;
		}
		else if(m2==112)
		{
			t2=t+334+d2;
		}
		if(m1==1)
		{
			t1=t+d1;
		}
		else if(m1==2)
		{
			t1=t+31+d1;
		}
		else if(m1==3)
		{
			t1=t+59+d1;
		}
		else if(m1==4)
		{
			t1=t+90+d1;
		}
		else if(m1==5)
		{
			t1=t+120+d1;
		}
		else if(m1==6)
		{
			t1=t+151+d1;
		}
		else if(m1==7)
		{
			t1=t+181+d1;
		}
		else if(m1==8)
		{
			t1=t+212+d1;
		}
		else if(m1==9)
		{
			t1=t+243+d1;
		}
		else if(m1==10)
		{
			t1=t+273+d1;
		}
		else if(m1==11)
		{
			t1=t+304+d1;
		}
		else if(m1==12)
		{
			t1=t+334+d1;
		}
		t=t2-t1;
	}
	else
	{
	for(i=y1+1;i<y2;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			t=t+366;
		}
		else
		{
			t=t+365;
		}
	}
	if((y1%4==0&&y1%100!=0)||(y1%400==0))
	{
		if(m1==1)
		{
			t=t+366-d1;
		}
		else if(m1==2)
		{
			t=t+366-31-d1;
		}
		else if(m1==3)
		{
			t=t+366-60-d1;
		}
		else if(m1==4)
		{
			t=t+366-91-d1;
		}
		else if(m1==5)
		{
			t=t+366-121-d1;
		}
		else if(m1==6)
		{
			t=t+366-152-d1;
		}
		else if(m1==7)
		{
			t=t+366-182-d1;
		}
		else if(m1==8)
		{
			t=t+366-213-d1;
		}
		else if(m1==9)
		{
			t=t+366-244-d1;
		}
		else if(m1==10)
		{
			t=t+366-274-d1;
		}
		else if(m1==11)
		{
			t=t+366-305-d1;
		}
		else if(m1==12)
		{
			t=t+366-335-d1;
		}
	}
	else
	{
		if(m1==1)
		{
			t=t+365-d1;
		}
		else if(m1==2)
		{
			t=t+365-31-d1;
		}
		else if(m1==3)
		{
			t=t+365-59-d1;
		}
		else if(m1==4)
		{
			t=t+365-90-d1;
		}
		else if(m1==5)
		{
			t=t+365-120-d1;
		}
		else if(m1==6)
		{
			t=t+365-151-d1;
		}
		else if(m1==7)
		{
			t=t+365-181-d1;
		}
		else if(m1==8)
		{
			t=t+365-212-d1;
		}
		else if(m1==9)
		{
			t=t+365-243-d1;
		}
		else if(m1==10)
		{
			t=t+365-273-d1;
		}
		else if(m1==11)
		{
			t=t+365-304-d1;
		}
		else if(m1==12)
		{
			t=t+365-334-d1;
		}
	}
	if((y2%4==0&&y2%100!=0)||(y2%400==0))
	{
		if(m2==1)
		{
			t=t+d2;
		}
		else if(m2==2)
		{
			t=t+31+d2;
		}
		else if(m2==3)
		{
			t=t+60+d2;
		}
		else if(m2==4)
		{
			t=t+91+d2;
		}
		else if(m2==5)
		{
			t=t+121+d2;
		}
		else if(m2==6)
		{
			t=t+152+d2;
		}
		else if(m2==7)
		{
			t=t+182+d2;
		}
		else if(m2==8)
		{
			t=t+213+d2;
		}
		else if(m2==9)
		{
			t=t+244+d2;
		}
		else if(m2==10)
		{
			t=t+274+d2;
		}
		else if(m2==11)
		{
			t=t+305+d2;
		}
		else if(m2==12)
		{
			t=t+335+d2;
		}
	}
	else
	{
		if(m2==1)
		{
			t=t+d2;
		}
		else if(m2==2)
		{
			t=t+31+d2;
		}
		else if(m2==3)
		{
			t=t+59+d2;
		}
		else if(m2==4)
		{
			t=t+90+d2;
		}
		else if(m2==5)
		{
			t=t+120+d2;
		}
		else if(m2==6)
		{
			t=t+151+d2;
		}
		else if(m2==7)
		{
			t=t+181+d2;
		}
		else if(m2==8)
		{
			t=t+212+d2;
		}
		else if(m2==9)
		{
			t=t+243+d2;
		}
		else if(m2==10)
		{
			t=t+273+d2;
		}
		else if(m2==11)
		{
			t=t+304+d2;
		}
		else if(m2==12)
		{
			t=t+334+d2;
		}
	}
	}
	printf("%d",t);
	return 0;
}
