int main()
{
	int y1,m1,d1,y2,m2,d2,r,s,s1,s2,i;
	scanf("%d%d%d\n",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
    if(y1>y2)
	{
		r=y1;y1=y2;y2=r;r=m1;m1=m2;m2=r;r=d1;d1=d2;d2=r;
	}
	if(y1==y2)
	{
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			if(m1==1)s1=d1;
			else if(m1==2)s1=d1+31;
			else if(m1==3)s1=d1+60;
			else if(m1==4)s1=d1+91;
			else if(m1==5)s1=d1+121;
			else if(m1==6)s1=d1+152;
			else if(m1==7)s1=d1+182;
			else if(m1==8)s1=d1+213;
			else if(m1==9)s1=d1+244;
			else if(m1==10)s1=d1+274;
			else if(m1==11)s1=d1+305;
			else if(m1==12)s1=d1+335;
            if(m2==1)s2=d2;
			else if(m2==2)s2=d2+31;
			else if(m2==3)s2=d2+60;
			else if(m2==4)s2=d2+91;
			else if(m2==5)s2=d2+121;
			else if(m2==6)s2=d2+152;
			else if(m2==7)s2=d2+182;
			else if(m2==8)s2=d2+213;
			else if(m2==9)s2=d2+244;
			else if(m2==10)s2=d2+274;
			else if(m2==11)s2=d2+305;
			else if(m2==12)s2=d2+335;
			s=s2-s1;
		}
		else
		{
			if(m1==1)s1=d1;
			if(m1==2)s1=d1+31;
			if(m1==3)s1=d1+59;
			if(m1==4)s1=d1+90;
			if(m1==5)s1=d1+120;
			if(m1==6)s1=d1+151;
		    if(m1==7)s1=d1+181;
			if(m1==8)s1=d1+212;
			if(m1==9)s1=d1+243;
			if(m1==10)s1=d1+273;
			if(m1==11)s1=d1+304;
			if(m1==12)s1=d1+334;
            if(m2==1)s2=d2;
			if(m2==2)s2=d2+31;
			if(m2==3)s2=d2+59;
			if(m2==4)s2=d2+90;
			if(m2==5)s2=d2+120;
			if(m2==6)s2=d2+151;
			if(m2==7)s2=d2+181;
			if(m2==8)s2=d2+212;
		    if(m2==9)s2=d2+243;
			if(m2==10)s2=d2+273;
			if(m2==11)s2=d2+304;
			if(m2==12)s2=d2+334;
			s=s2-s1;
		}
		printf("%d",s);
	}
	if(y1<y2)
	{
		s=0;
		for(i=y1;i<=y2;i++)
		{
			if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))s=s+366;
			else s=s+365;
		}
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		{
			if(m1==1)s1=d1;
			if(m1==2)s1=d1+31;
			if(m1==3)s1=d1+60;
			if(m1==4)s1=d1+91;
			if(m1==5)s1=d1+121;
			if(m1==6)s1=d1+152;
			if(m1==7)s1=d1+182;
			if(m1==8)s1=d1+213;
			if(m1==9)s1=d1+244;
			if(m1==10)s1=d1+274;
			if(m1==11)s1=d1+305;
			if(m1==12)s1=d1+335;
		}
		else
		{
			if(m1==1)s1=d1;
			if(m1==2)s1=d1+31;
			if(m1==3)s1=d1+59;
			if(m1==4)s1=d1+90;
			if(m1==5)s1=d1+120;
			if(m1==6)s1=d1+151;
			if(m1==7)s1=d1+181;
			if(m1==8)s1=d1+212;
			if(m1==9)s1=d1+243;
			if(m1==10)s1=d1+273;
			if(m1==11)s1=d1+304;
			if(m1==12)s1=d1+334;
		}
		if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		{
			if(m2==1)s2=d2;
			if(m2==2)s2=d2+31;
			if(m2==3)s2=d2+60;
			if(m2==4)s2=d2+91;
			if(m2==5)s2=d2+121;
			if(m2==6)s2=d2+152;
			if(m2==7)s2=d2+182;
			if(m2==8)s2=d2+213;
			if(m2==9)s2=d2+244;
			if(m2==10)s2=d2+274;
			if(m2==11)s2=d2+305;
			if(m2==12)s2=d2+335;
			s2=366-s2;
		}
		else
		{
		    if(m2==1)s2=d2;
			if(m2==2)s2=d2+31;
			if(m2==3)s2=d2+59;
			if(m2==4)s2=d2+90;
			if(m2==5)s2=d2+120;
			if(m2==6)s2=d2+151;
			if(m2==7)s2=d2+181;
			if(m2==8)s2=d2+212;
			if(m2==9)s2=d2+243;
			if(m2==10)s2=d2+273;
			if(m2==11)s2=d2+304;
			if(m2==12)s2=d2+334;
			s2=365-s2;
		}
		s=(s-s1-s2);
		printf("%d\n",s);
	}
}