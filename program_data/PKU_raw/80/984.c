
int main()
{
	int a,b,c,d,e,f,s;
	int tem;
	int q,w;
	int i;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	int days(int x,int y,int z);
	if(a==d)
	{
		q=days(a,b,c);
		w=days(d,e,f);
		s=w-q;
	}
	else
	{
		q=days(a,b,c);
		w=days(d,e,f);
		if((a%4==0&&a%100!=0)||(a%400==0))
		{
		s=366-q;
		for(i=a+1;i<=d-1;i++)
		{
			if((i%4==0&&i%100!=0)||(i%400==0))
				s=s+366;
			else
				s=s+365;
		}
		s=s+w;
		}
	else
		{
		s=365-q;
		for(i=a+1;i<=d-1;i++)
		{
			if((i%4==0&&i%100!=0)||(i%400==0))
				s=s+366;
			else
				s=s+365;
		}
		s=s+w;

		}


	}
	printf("%d",s);

    return 0;
}
int days(int x,int y,int z)
{
	int tem;
	if((x%4==0&&x%100!=0)||(x%400==0))
	{
		if(y==1)
			tem=z;
		else if(y==2)
			tem=31+z;
		else if(y==3)
			tem=31+29+z;
		else if(y==4)
			tem=31+29+31+z;
		else if(y==5)
			tem=31+29+31+30+z;
		else if(y==6)
			tem=31+29+31+30+31+z;
		else if(y==7)
			tem=31+29+31+30+31+30+z;
		else if(y==8)
			tem=31+29+31+30+31+30+31+z;
		else if(y==9)
			tem=31+29+31+30+31+30+31+31+z;
		else if(y==10)
			tem=31+29+31+30+31+30+31+31+30+z;
		else if(y==11)
			tem=31+29+31+30+31+30+31+31+30+31+z;
		else
			tem=31+29+31+30+31+30+31+31+30+31+30+z;
	}
	else
	{
		if(y==1)
			tem=z;
		else if(y==2)
			tem=31+z;
		else if(y==3)
			tem=31+28+z;
		else if(y==4)
			tem=31+28+31+z;
		else if(y==5)
			tem=31+28+31+30+z;
		else if(y==6)
			tem=31+28+31+30+31+z;
		else if(y==7)
			tem=31+28+31+30+31+30+z;
		else if(y==8)
			tem=31+28+31+30+31+30+31+z;
		else if(y==9)
			tem=31+28+31+30+31+30+31+31+z;
		else if(y==10)
			tem=31+28+31+30+31+30+31+31+30+z;
		else if(y==11)
			tem=31+28+31+30+31+30+31+31+30+31+z;
		else
			tem=31+28+31+30+31+30+31+31+30+31+30+z;
	}
	return tem;
}