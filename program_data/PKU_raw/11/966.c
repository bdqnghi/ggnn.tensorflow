int ping(int n)
{
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
		return 31;
	if(n==2)
		return 28;
	if(n==4||n==6||n==9||n==11)
		return 30;
}
int run(int n)
{
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
		return 31;
	if(n==2)
		return 29;
	if(n==4||n==6||n==9||n==11)
		return 30;
}

int main()
{
	int n,month,day,sum=0;
	cin>>n>>month>>day;	
	int i;
	if((n%400==0)||(n%4==0&&n%100!=0))
	{
		for(i=1;i<month;i++)
			sum+=run(i);
		sum+=day;
		cout<<sum;
	}		
	else 
	{
			for(i=1;i<month;i++)
				sum+=ping(i);
			sum+=day;
			cout<<sum;
	}
	return 0;
}