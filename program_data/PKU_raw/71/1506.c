
int run(int a)
{ int day;
if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	day=3;
else if(a==2)
	day=1;
else day=2;
return(day);
}


int feirun(int a)
{ int day;
if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	day=3;
else if(a==2)
	day=0;
else day=2;
return(day);
}


int main()
{
	int n,sum;
	cin>>n;
	int year[300],mon1[300],mon2[300];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>year[i]>>mon1[i]>>mon2[i];
	}
	
	
	for(i=0;i<n;i++)
	{         
		sum=0;
		if(year[i]%400==0||year[i]%4==0&&year[i]%100!=0)
		{
			if(mon1[i]>mon2[i])
			{
				for(j=mon2[i];j<mon1[i];j++)
				{
					sum=sum+run(j);
				}			
			}
			else
			{
				for(j=mon1[i];j<mon2[i];j++)
				{
					sum=sum+run(j);
				}			
			}
		}
		else
			{
			if(mon1[i]>mon2[i])
			{
				for(j=mon2[i];j<mon1[i];j++)
				{
					sum=sum+feirun(j);
				}	
		
			}
			else
			{
				for(j=mon1[i];j<mon2[i];j++)
				{
					sum=sum+feirun(j);
				}			
		
			}
		}
		if(sum%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;	
	}
	return 0;
}






