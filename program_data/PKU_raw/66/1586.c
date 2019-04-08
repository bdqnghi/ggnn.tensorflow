int main()
{
	int y,m,d,numofafter=0,num=0,final=0;
	double numofleap;
	char xingqi[8][5]={"0","Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	numofleap=floor((y-1)/4.0)-(floor((y-1)/100.0)-floor(floor((y-1)/100.0)/4.0));
	numofafter=numofleap*2+y-numofleap-1;
	int start=0;
	start=numofafter%7+1;
	if((y%4==0&&y%100!=0)||(y%400==0))
		mon[2]=29;
	for(int i=0;i<m;i++)
		num=num+mon[i];
	num=num+d;
	final=(num%7+start-1)%7;
	    cout<<xingqi[final]<<endl;
	return 0;
}