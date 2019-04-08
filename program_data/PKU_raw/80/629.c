int judge(int x)
{
	if((x%4==0&&x%100!=0)||x%400==0)
		return 1;
	else
		return 0;
}
int main()
{
	int y1,y2,d1,d2,m1,m2,sum=0,i;
	int pin[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	if(y1==y2)
	{
		if(m1==m2)
			sum=d2-d1;
		else
		{
			if(judge(y1))
			{
				for(i=m1+1;i<m2;i++)
				{
					sum=sum+run[i];
				   sum=sum+run[m1]-d1+d2;
				}
			}
			else
			{
				for(i=m1+1;i<m2;i++)
				{
					sum=sum+pin[i];
				    sum=sum+pin[m1]-d1+d2;
				}
			}
		}
	}
	else
	{
		if(judge(y1))
		{
			for(i=12;i>m1;i--)
			{
				sum=sum+run[i];
			}
			sum=sum+run[m1]-d1;
		}
		else
		{
				for(i=12;i>m1;i--)
				{
					sum=sum+pin[i];
				}
				sum=sum+pin[m1]-d1;
		}
		for(i=y1+1;i<y2;i++)
		{
			if(judge(i))
				sum=sum+366;
			else
				sum=sum+365;
		}
		if(judge(y2))
		{
			for(i=1;i<m2;i++)
			{
				sum=sum+run[i];
			}
			sum=sum+d2;
		}
		else
		{
			for(i=1;i<m2;i++)
			{
				sum=sum+pin[i];
			}
			sum=sum+d2;
		}
	}
	cout<<sum<<endl;
	return 0;
}

