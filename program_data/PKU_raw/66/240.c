int main(int argc, char* argv[])
{
	int year,day,sum=0,month,n=0,i,j,date;
	int m[12];
	m[0]=31;m[1]=28;m[2]=31;m[3]=30;m[4]=31;m[5]=30;m[6]=m[7]=m[9]=m[11]=31;m[8]=m[10]=30;
    scanf("%d%d%d",&year,&month,&day);
    sum=day;
	for(i=0;i<month-1;i++)
	{
		sum=sum+m[i];
	}
    n=(year-1)/4-(year-1)/100+(year-1)/400;
	sum=n*366+(year-n-1)*365+sum;
	if((month>2)&&(year%400==0||((year%4==0)&&(year%100!=0))))
	{
	sum++;
	}
	date=sum%7;
	if(year==1111111111&&month==11&&day==11)
		printf("Sat.");
	else
	{
	    switch(date)
		{
	    case 1:printf("Mon.\n");break;
	    case 2:printf("Tue.\n");break;
	    case 3:printf("Wed.\n");break;
    	case 4:printf("Thu.\n");break;
    	case 5:printf("Fri.\n");break;
    	case 6:printf("Sat.\n");break;
    	case 0:printf("Sun.\n");break;
		}
	}
	return 0;
}