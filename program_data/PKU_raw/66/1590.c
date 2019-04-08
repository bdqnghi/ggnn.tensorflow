int main()
{
	int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,w,i,j=0;
	cin>>y>>m>>d;
	char a[][10]={"Sun.","Mon.","Tue.","Wed.","Tue.","Fri.","Sat."};
	w=y%7+y/4-y/100+y/400;
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		if(w==1)
		{
			w=7;
		}
		else
		{
		w=w-1;
		}
		day[2]=29;
	}
	for(i=1;i<m;i++)
		j=j+day[i];
	j=j+d-1;
	w=(j+w)%7;
	cout<<a[w]<<endl;
}
	




