int main()
{
	
	int n=0;
	int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int year=0,month1=0,month2=0,max=0,min=0,k=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		sum=0,year=0,month1=0,month2=0;
		cin>>year>>month1>>month2;
		if(month1>month2)                   //??month1?month2??
			{
				max=month1;
				min=month2;
		}
		else
			{
				max=month2;
		    min=month1;
		}
		k = 0;
if(year%4==0&&year%100!=0||year%400==0)   //???????
		{
			while(min+k<max)            //??month1?month2?????
			{
				sum=sum+b[min+k];      
				k++;
		    }
			if(sum%7==0)                 //???????
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
	}
	
else                                    //??
		{
			while(min+k<max)
			{
				sum=sum+a[min+k];
				k++;
		    }
			if(sum%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
	     }
	}
}