int main()  
{  
	int y,m,d,day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	if((y%4==0&&y%100!=0)||(y%400==0))
		day[1]=29;
	for(int i=0;i<m-1;i++)
		d+=day[i];
	cout<<d;
    return 0;  
} 
