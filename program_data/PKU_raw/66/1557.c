int main()
{
	int year,month1,day;
	cin>>year>>month1>>day;
	char week[7][200]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y;
	int yy=year-1;
	y=(yy/4+yy-yy/100+yy/400)%7;
    
	int sum=0;
	int i;
	if(((year%4==0)&&(year%100)!=0)||(year%400==0))
	{
		month[2]=month[2]+1;
	    for(i=1;i<month1;i++)
	    {
	    	sum=sum+month[i];
	    }
	    sum=sum+day;
		
	}
	else
	{
	 for(i=1;i<month1;i++)
	    {
	    	sum=sum+month[i];
	    }
	    sum=sum+day;	
	}
	cout<<week[(y+sum-1)%7]<<".";
	
}