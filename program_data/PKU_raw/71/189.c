int main()
{
	int  Run(int );
	int tianshu[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};//??????
	int n,year,month1,month2,temp,i;
	cin>>n;//??
	while(n--)
	{   int sum=0;
		cin>>year>>month1>>month2;
		if(month1>month2) {//???????
			temp=month1;
			month1=month2;
			month2=temp;
		}
		for(i=month1;i<month2;i++)//????
		{
			sum+=tianshu[Run(year)][i];
		}
		if(sum%7==0) cout<<"YES"<<endl;//??
		else cout<<"NO"<<endl;

	}
}
int  Run(int year)//????
{
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
			return 1;
	else return 0;
}
