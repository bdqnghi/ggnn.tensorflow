void main()
{
	int mon,day,i,sumday,a,b;//
	scanf("%d",&day);
	for(mon=1;mon<=12;mon++)
	{
		switch(mon)
		{
			case 1:sumday=12;break;
			case 2:sumday=31+12;break;
			case 3:sumday=59+12;break;
			case 4:sumday=90+12;break;
			case 5:sumday=120+12;break;
			case 6:sumday=151+12;break;
			case 7:sumday=181+12;break;
			case 8:sumday=212+12;break;
			case 9:sumday=243+12;break;
			case 10:sumday=273+12;break;
			case 11:sumday=304+12;break;
			case 12:sumday=334+12;break;
		}

		a=sumday%7;
		b=day+a;
		if(b>7){b=b-7;}

		if(b==5)printf("%d\n",mon);
	}
}







