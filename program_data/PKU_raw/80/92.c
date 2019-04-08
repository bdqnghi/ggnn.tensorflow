void main()
{
	int sty,std,ey,ed,dy,ry,m,m1,stm,em;                                                 
	scanf("%d%d%d%d%d%d",&sty,&stm,&std,&ey,&em,&ed);
    ry=0;
	dy=sty;
	while(dy<ey)
	{
		if((dy% 4 == 0 && dy% 100 != 0) || (dy% 400 == 0))
			ry=ry+1;
		dy++;
	}
	if((sty% 4 == 0 && sty% 100 != 0) || (sty% 400 == 0))
	{
		if (stm==1)
			m=0;
		else if (stm==2)
			m=31;
		else if (stm==3)
			m=60;
		else if (stm==4)
			m=91;
		else if (stm==5)
			m=121;
		else if (stm==6)
			m=152;
		else if (stm==7)
			m=182;
		else if (stm==8)
			m=213;
		else if (stm==9)
			m=244;
		else if (stm==10)
			m=274;
		else if (stm==11)
			m=305;
		else if (stm==12)
			m=335;
		else
			printf("error");	
	}
	else
	{	
		if (stm==1)
			m=0;
		else if (stm==2)
			m=31;
		else if (stm==3)
			m=59;
		else if (stm==4)
			m=90;
		else if (stm==5)
			m=120;
		else if (stm==6)
			m=151;
		else if (stm==7)
			m=181;
		else if (stm==8)
			m=212;
		else if (stm==9)
			m=243;
		else if (stm==10)
			m=273;
		else if (stm==11)
			m=304;
		else if (stm==12)
			m=334;
		else
			printf("error");	
	}
	if((ey% 4 == 0 && ey% 100 != 0) || (ey% 400 == 0))
	{
		if (em==1)
			m1=0;
		else if (em==2)
			m1=31;
		else if (em==3)
			m1=60;
		else if (em==4)
			m1=91;
		else if(em==5)
			m1=121;
		else if (em==6)
			m1=152;
		else if (em==7)
			m1=182;
		else if (em==8)
			m1=213;
		else if (em==9)
			m1=244;
		else if (em==10)
			m1=274;
		else if (em==11)
			m1=305;
		else if (em==12)
			m1=335;
		else
			printf("error");
	}
	else
	{
		if (em==1)
			m1=0;
		else if (em==2)
			m1=31;
		else if (em==3)
			m1=59;
		else if (em==4)
			m1=90;
		else if (em==5)
			m1=120;
		else if (em==6)
			m1=151;
		else if(em==7)
			m1=181;
		else if (em==8)
			m1=212;
		else if (em==9)
			m1=243;
		else if (em==10)
			m1=273;
		else if (em==11)
			m1=304;
		else if(em==12)
			m1=334;
		else 
			printf("error");	
	}
	int d=ry*366+(ey-sty-ry)*365+m1-m+ed-std;
		printf("%d\n",d);
}









