int main ( )
{
	unsigned long nian,yue,ri,run,tian,xq;
	scanf("%d %d %d\n",&nian,&yue,&ri);
	run=(nian-1)/4-(nian-1)/100+(nian-1)/400;		
	if (nian%4==0&&nian%100!=0||nian%100==0&&nian%400==0)
	{
		switch (yue)
	{
		case 1:tian=0;break;
		case 2:tian=31;break;
        case 3:tian=60;break;
		case 4:tian=91;break;
		case 5:tian=121;break;
		case 6:tian=152;break;
		case 7:tian=182;break;
		case 8:tian=213;break;
		case 9:tian=244;break;
		case 10:tian=274;break;
		case 11:tian=305;break;
		case 12:tian=335;break;
	}
	}
	else 
	{
		switch (yue)
	{
		case 1:tian=0;break;
		case 2:tian=31;break;
        case 3:tian=59;break;
		case 4:tian=90;break;
		case 5:tian=120;break;
		case 6:tian=151;break;
		case 7:tian=181;break;
		case 8:tian=212;break;
		case 9:tian=243;break;
		case 10:tian=273;break;
		case 11:tian=304;break;
		case 12:tian=334;break;
	}
	}
	tian=(nian-1)+run+tian+ri;
	xq=(tian%7);
	switch(xq)
	{
       case 0:printf("Sun.\n");break;
       case 1:printf("Mon.\n");break;
	   case 2:printf("Tue.\n");break;
	   case 3:printf("Wed.\n");break;
	   case 4:printf("Thu.\n");break;
	   case 5:printf("Fri.\n");break;
	   case 6:printf("Sat.\n");break;
	   	}
      return 0;	
}