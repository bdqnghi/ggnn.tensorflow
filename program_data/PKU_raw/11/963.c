int main()
{
	int Day1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int Day2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year,month,day;
	int sumday=0;
	int i,j;
	
	cin >> year >> month >> day;
	if((year%400==0)||(year%4==0&&year%100!=0))
		j=1;
	else
		j=0;
	if(j==1)
	{
	     if(month==1)
		 cout << day << endl;
        	if(month>1)
	      {
		     for(i=0;i<month-1;i++)
			 {sumday=sumday+Day2[i];}
	        	sumday=sumday+day;
		     cout << sumday << endl;
	      }
	}
			if(j==0)
			{
				
	               if(month==1)
		          cout << day << endl;
        	        if(month>1)
	              {
		              for(i=0;i<month-1;i++)
					  {sumday=sumday+Day1[i];}
	                	sumday=sumday+day;
		              cout << sumday << endl;
	              }
				
			}
	return 0;
}