int main()
{
	int a[3],b[3],i,year = 0,count  = 0,sum = 0,sum1 = 0,flag = 0;
	for(i = 0; i < 3; i++)
		cin >> a[i];
	for(i = 0; i< 3; i++)
		cin >> b[i];
	year = b[0] - a[0] - 1;
	for(i = a[0] + 1;i<b[0];i++)
	{
       if((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
		   count++;
	}
    sum = sum + 365*year + count;
	if((a[0] % 4 == 0&&a[0] % 100 != 0)||(a[0] % 400 == 0))
		flag = 1;
	for(i = 1; i < a[1]; i++)
	{
		if((i==1)||(i == 3)||(i == 5)||(i == 7)||(i == 8)||(i == 10)||(i==12))
			sum1 = sum1 + 31;
		else if((i == 4)||(i == 6)||(i == 9)||(i == 11))
			sum1= sum1+ 30;
		else if(i == 2)
		{
			if(flag == 1)
			{
				sum1=sum1+ 29;
			    
			}
			else sum1 = sum1 + 28;
		}
	}
     sum1 = sum1 + a[2];
	 sum = sum + 365 +flag - sum1;
	 for(i  = 1; i < b[1]; i++)
	 {

		if((i==1)||(i == 3)||(i == 5)||(i == 7)||(i == 8)||(i == 10)||(i==12))
			sum = sum + 31;
		else if((i == 4)||(i == 6)||(i == 9)||(i == 11))
			sum= sum+ 30;
		else if(i == 2)
		{
			if((b[0] % 4 == 0&&b[0] % 100 != 0)||(b[0] % 400 == 0))
			sum=sum+ 29;
		
			else sum = sum + 28;
		}
	 }
	 sum = sum + b[2];
	 cout << sum << endl;
	 
	 return 0;
}
