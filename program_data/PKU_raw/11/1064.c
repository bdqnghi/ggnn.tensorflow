int main()
{
	int year,month1,day;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>month1>>day;
	int i;
	int sum=0;
	if(((year%4==0)&&(year%100!=0))||(year%400==0)) 
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
	
	cout<<sum;
	return 0;
	 
} 