void main()
{
	int f(int y,int m,int d);
	int y1,y2,m1,m2,d1,d2,s1,s2;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	s1=f(y1,m1,d1);
	s2=f(y2,m2,d2);
	printf("%d",s2-s1);
}
int f(int y,int m,int d)
{	int i,s=0;
	for(i=1;i<y;i++)
	{if((i%4==0&&i%100!=0)||(i%400==0))
	s=s+366;
	else s=s+365;
	}
	for(i=1;i<m;i++)
	{if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
	s=s+31;
	else
	{if(i==2)
	{if((y%4==0&&y%100!=0)||(y%400==0))
	s=s+29;
	else s=s+28;}
	else s=s+30;}
	}
	s=s+d;
	return(s);
}