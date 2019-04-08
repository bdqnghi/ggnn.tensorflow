void main()
{
	int sy,sm,sd,ey,em,ed,year,a,b,c,sum;
	scanf("%d %d %d\n%d %d %d",&sy,&sm,&sd,&ey,&em,&ed);
    year=sy;
	c=(ey-sy)*365;
	switch(sm)
	{
	case 1:a=sd;break;
	case 2:a=sd+31;break;
	case 3:a=sd+59;break;
	case 4:a=sd+90;break;
	case 5:a=sd+120;break;
	case 6:a=sd+151;break;
	case 7:a=sd+181;break;
	case 8:a=sd+212;break;
	case 9:a=sd+243;break;
	case 10:a=sd+273;break;
	case 11:a=sd+304;break;
	default:a=sd+334;
	}
   switch(em)
	{
	case 1:b=ed;break;
	case 2:b=ed+31;break;
	case 3:b=ed+59;break;
	case 4:b=ed+90;break;
	case 5:b=ed+120;break;
	case 6:b=ed+151;break;
	case 7:b=ed+181;break;
	case 8:b=ed+212;break;
	case 9:b=ed+243;break;
	case 10:b=ed+273;break;
	case 11:b=ed+304;break;
	default:b=ed+334;
	}
   sum=c+b-a;
   while(year<=ey)
	   {
		   sum=sum+((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
		   year=year+1;
	   }
   sum=sum-(((sy % 4 == 0 && sy % 100 != 0 )|| sy % 400 == 0)&&sm>2);
   sum=sum-(((ey % 4 == 0 && ey % 100 != 0 )|| ey % 400 == 0)&&em<=2);
   printf("%d\n",sum);
}