int main()  
{  
	int y,m,d,day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char weekday[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	cin>>y>>m>>d;
	if((y%4==0&&y%100!=0)||(y%400==0))
		day[1]=29;
	for(int i=0;i<m-1;i++)
		d+=day[i];
	d=d%7;
	d+=(y-1)+(y-1)/4-(y-1)/100+(y-1)/400;
	d=d%7;
	cout<<weekday[d]<<endl;
    return 0;  
} 
