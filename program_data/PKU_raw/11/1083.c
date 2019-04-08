
int day_of_month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int year,month,date;
	cin>>year>>month>>date;
	int total=0;
	if(year%400==0||(year%4==0&&year%100!=0))
	{
		day_of_month[2]=29;
		
		for(int i=0;i<month;i++)
		{
			total+=day_of_month[i];
		}
		total+=date;
	}
	else
	{
		day_of_month[2]=28;
		for(int i=0;i<month;i++)
		{
			total+=day_of_month[i];
		}
		total+=date;
	}
	cout<<total<<endl;
	
	return 0;
}
