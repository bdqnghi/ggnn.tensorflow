int main()
{
	int year,month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},day,month,number=0,i;
	cin>>year>>month>>day;
	if(((year%4==0)&&(year%100!=0))||(year%400==0)) 
	{
		for(i=0;i<month;i++)
			number+=month2[i];
		number+=day;
	}
	else 
	{
		for(i=0;i<month;i++)
			number+=month1[i];
		number+=day;
	}
	cout<<number;

	return 0;
}
