int main()
{
	int all(int,int,int);
	int year1,year2,month1,month2,date1,date2;
	scanf("%d%d%d",&year1,&month1,&date1);
    scanf("%d%d%d",&year2,&month2,&date2);
	printf("%d\n",all(year2,month2,date2)-all(year1,month1,date1));
	return 0;
}
int all(int year,int month,int date)
{
	int zong=0,a[3000],b[12],i,j,k;
	for(i=0;i<year-1;i++)
	{
		if((i+1)%4==0&&(i+1)%100!=0||((i+1)%400==0))
			a[i]=366;
		else a[i]=365;
		zong=zong+a[i];
	}
	if(year%4==0&&year%100!=0||year%400==0)
			b[1]=29;
		else b[1]=28;
	for(j=0;j<month-1;j++)
	{
		if((j+1)==1||(j+1)==3||(j+1)==5||(j+1)==7||(j+1)==8||(j+1)==10||(j+1)==12)
			b[j]=31;
     	if((j+1)==4||(j+1)==6||(j+1)==9||(j+1)==11)
			b[j]=30;
	}
	for(k=0;k<month-1;k++)
		zong=zong+b[k];
	zong=zong+date;
	return zong;
}