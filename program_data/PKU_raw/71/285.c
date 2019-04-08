int isRN(int year)
{
	int result;
	if((year%4==0&&year%100!=0)||year%400==0)
		result=1;
	else
		result=0;
	return result;
}
void main()
{
	int n,m1,m2,year;
	int i,k;
	int e;
	int sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d%d%d",&year,&m1,&m2);
		if(m1>m2)
		{
			e=m1;
			m1=m2;
			m2=e;
		}
		for(k=m1;k<m2;k++)
		{
			if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
				sum+=31;
			else if(k==4||k==6||k==9||k==11)
				sum+=30;
			else
			{
				if(isRN(year)==1)
					sum+=29;
				else
					sum+=28;
			}
		}
		if(sum%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}


