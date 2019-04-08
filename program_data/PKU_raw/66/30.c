int main()
{
	int yy,mm,dd,i;
	long day=0;
	int dm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char d[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	scanf("%d%d%d",&yy,&mm,&dd);
	yy%=400;
	if(yy==0)yy=400;
	day+=(yy-1)*365;
	day+=(yy-1)/4-(yy-1)/100;
	if(yy%4==0&&yy%100!=0||yy%400==0)dm[1]++;
	for(i=0;i<mm-1;i++)day+=dm[i];
	day+=dd;
	printf("%s\n",d[day%7]);
	return 0;
}