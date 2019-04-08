int main()
{
	int year,month,day,c,days=0,i;
	int M[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>year>>month>>day;
	if((year%4==0&&year%100!=0)||(year%400==0))
		c=1;
	else 
		c=0;
	if(month==1)
		cout<<day;
	else
	{
		for(i=0;i<month-1;i++)
		   days+=M[c][i];
		cout<<days+day;
	}
	return 0;
}