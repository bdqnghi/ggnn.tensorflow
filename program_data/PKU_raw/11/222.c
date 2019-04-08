int main()
{
	int year[10],mon[10],date[10],day[12],i,j,sum[10];
	for(i=0;i<=4;i++)
	scanf("%d %d %d",&year[i],&mon[i],&date[i]);
	for(i=0;i<=4;i++)
	{sum[i]=0;
	day[0]=31;
	if(((year[i]%4==0)&&(year[i]%100!=0))||(year[i]%400==0))day[1]=29;
    else day[1]=28;
	day[2]=31;
    day[3]=30;
	day[4]=31;
	day[5]=30;
	day[6]=31;
	day[7]=31;
	day[8]=30;
	day[9]=31;
	day[10]=30;
	day[11]=31;
	for(j=0;j<=mon[i]-2;j++)sum[i]=sum[i]+day[j];
	sum[i]=sum[i]+date[i];
	printf("%d\n",sum[i]);}
	return 0;
}