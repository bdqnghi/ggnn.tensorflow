
int main()
{
	int n,m;
	int i,j,a=0;
	
	int year,month1,month2;

	int mi[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	int mj[12]={31,29,31,30,31,30,31,31,30,31,30,31};

	scanf("%d",&n);

	

	for(i=1;i<=n;i++)
	{
		a=0;
		scanf("%d %d %d",&year,&month1,&month2);

		if((year%4==0&&year%100!=0)||year%400==0)
		{

			if(month2<month1)
			{
				m=month1;
				month1=month2;
				month2=m;
			}

			for(j=month1-1;j<month2-1;j++)
			{
				a=a+mj[j];

			}
			if(a%7==0)
				printf("YES\n");
			else
				printf("NO\n");

		}
		else
		{
			if(month2<month1)
			{
				m=month1;
				month1=month2;
				month2=m;


			}
				for(j=month1-1;j<month2-1;j++)
			{
				a=a+mi[j];

			}
			if(a%7==0)
				printf("YES\n");
			else
				printf("NO\n");


		}

		
	
	}
	return 0;
	
}