int main()
{
	int y,m,d,i,y1,y2;
	char str[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	y1=(y-1)/4-(y-1)/100+(y-1)/400;y2=y-1-y1;
	d+=(2*y1+y2);
	if(y%400==0||(y%4==0&&y%100!=0))
		month[1]+=1;
	for(i=0;i<m-1;i++)
		d+=month[i];
	cout<<str[d%7]<<endl;
	return 0;
}

