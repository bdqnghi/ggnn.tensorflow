void main()
{
	char n[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	int y,m,d,i,j,day[12]={31,28,31,30,31,30,31,31,30,31,30,31},count=0,total=0,p;
	scanf("%d%d%d",&y,&m,&d);
	if ((y%4==0&&y%100!=0)||(y%400==0)) day[1]=29;
	p=(y-y%400)/400;
	y=y%400+400;
	for (i=1;i<y;i++)
		{
			if ((i%4==0&&i%100!=0)||(i%400==0)) count=count+2;
			else count=count+1;
		}
	for (j=1;j<m;j++)
		total=total+day[j-1];
		total=total+d;
		count=count+total%7;
	count=count%7;
	if (count==0) count=7;
	printf("%s\n",n[count-1]);
}