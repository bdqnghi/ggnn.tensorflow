int main ()
{
	int n,i,j;
	int year,month1,month2;
	int relation=0,middle;
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> n;
	for (i=0;i<n;i++)
	{
		cin >> year >> month1 >> month2;
		if (month1>month2)
		{
			middle=month1;
			month1=month2;
			month2=middle;
		}
		if(year%4==0&&year%100!=0||year%400==0)
		{
			day[1]=29;
			for(j=month1;j<month2;j++)
			{
				relation=relation+day[j-1];
			}
			if (relation%7==0)
			{
				cout << "YES" << endl;
			}
			else 
			{
				cout << "NO" <<endl;
			}
			day[1]=28;
		}
		else
		{
				for(j=month1;j<month2;j++)
				{
			    	relation=relation+day[j-1];
				}
		    	if (relation%7==0)
				{
			    	cout << "YES" << endl;
				}
		    	else 
				{
			    	cout << "NO" <<endl;
				}
		}
		relation=0;
	}
	return 0;
}