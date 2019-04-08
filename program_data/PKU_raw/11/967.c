int main()
{
	int year,month,day,sum=0,i;
	cin>>year>>month>>day;
	if(( (year%400)==0) || ( ((year%4)==0) && ((year%100)!=0) ) )
	{
		int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<month-1;i++)
			sum=sum+days[i];
	}
	else 
	{
		int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<month-1;i++)
			sum=sum+days[i];
	}
	sum=sum+day;
	cout<<sum<<endl;
	return 0;
}