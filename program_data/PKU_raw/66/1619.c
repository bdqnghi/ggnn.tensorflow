int main()
{
	int n=-1,y,d,m,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char week[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	cin>>y>>m>>d;
	if(y%400==0||(y%4==0&&y%100!=0))
		a[2]=29;
	if(y>1)
		y=(y-1)%400;
	n=n-(y/100)*2;
	y=y%100;
	while(y--)
	{
		if((y+1)%400==0||((y+1)%4==0&&(y+1)%100!=0))
			n+=366;
		else
			n+=365;
	}
	for(int i=1;i<m;i++)
		n+=a[i];
	n+=d;
	cout<<week[n%7];
	return 0;
}