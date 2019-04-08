/*
 * Author : houchenglong
 * 2014.1.5
 *
 */
int main()
{
	int n,year,month1,month2,sum=0,i,j;
	int Mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>year>>month1>>month2;
		if(year%400==0||(year%100!=0&&year%4==0))
		{
			Mon[1]=Mon[1]+1;
			if(month1>month2)
			{
				for(j=month2;j<month1;j++)
					sum=sum+Mon[j-1];
				if(sum%7==0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
			else
			{
				for(j=month1;j<month2;j++)
					sum=sum+Mon[j-1];
				if(sum%7==0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
		else
		{
			if(month1>month2)
			{
				for(j=month2;j<month1;j++)
					sum=sum+Mon[j-1];
				if(sum%7==0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
			else
			{
				for(j=month1;j<month2;j++)
					sum=sum+Mon[j-1];
				if(sum%7==0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
		sum=0;
		Mon[1]=28;
	}
	return 0;
}

