int main()
{
	int n,i,k;
    int year[200],month1[200],month2[200];
	int result1,result2,day;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d %d %d",&year[k],&month1[k],&month2[k]);
	}
	for(k=0;k<n;k++)
	{
		result1=0;
		result2=0;
	for( i = 1; i < month1[k]; i++)
	{ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			result1+= 31;	
		} 
		else if (i == 4 || i ==6 || i == 9 || i==11)
		{
			result1+= 30;
		}
		else if(i == 2)
		{
			if(year[k]%400 == 0 ||(year[k]%4==0 && year[k]%100!=0))
			{
				result1+= 29;
			} 
			else 
			{
				result1+= 28;
			}	
		}
	}
	for( i = 1; i < month2[k]; i++)
	{ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			result2+= 31;	
		} 
		else if (i == 4 || i ==6 || i == 9 || i==11)
		{
			result2+= 30;
		}
		else if(i == 2)
		{
			if(year[k]%400 == 0 ||(year[k]%4==0 && year[k]%100!=0))
			{
				result2+= 29;
			} 
			else 
			{
				result2+= 28;
			}	
		}
	}
	day=result1-result2;
if(day < 0){
		day = 0 - day;
}
if(day%7==0)
{
	printf("YES\n");
}
else{
	printf("NO\n");
}
	}

	return 0;
}
