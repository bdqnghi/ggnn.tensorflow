int main ( )
{
	int nian,yue,ri,tian,i=1;
	for (;i<=5;i=i+1)
	{
	scanf("%d %d %d\n",&nian,&yue,&ri);
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
	tian=tian+ri;
	printf("%d\n",tian);
	}
         return 0;
}