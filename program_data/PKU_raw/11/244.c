int main()
{
	int w,s,i,year,month,day;
	int ymd[5][3];
	int num[5];
	for(i=0;i<5;i++)
	{
		scanf("%d %d %d\n",&year,&month,&day);
		ymd[i][0]=year;
		ymd[i][1]=month;
		ymd[i][2]=day;
	}
	for(i=0;i<5;i++)
	{
		year=ymd[i][0];
		month=ymd[i][1];
		day=ymd[i][2];
		w=(year%4==0&&year%100!=0)||year%400!=0;
		switch(month)
		{
        case 1:s=0;break;
		case 2:s=31;break;
		case 3:s=59;break;
		case 4:s=90;break;
		case 5:s=120;break;
		case 6:s=151;break;
		case 7:s=181;break;
		case 8:s=212;break;
		case 9:s=243;break;
		case 10:s=273;break;
		case 11:s=304;break;
		case 12:s=334;break;
		}
		if(w==0&&month>2) 
		{
			s=s+1;
		}
	    num[i]=s+day;
	}
	printf("%d\n%d\n%d\n%d\n%d\n",num[0],num[1],num[2],num[3],num[4]);
}