int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int leapday[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int leapyear (int n)
{
	return ((n%4==0 && n%100!=0) || (n%400==0));
}
int count (int a,int b,int c)
{
	int leapyear(int n);
	int m=0,i;
	if (leapyear(a)==0)
	{
		for (i=0;i<b;i++)
		{
			m=m+day[i];
		}
	}
	else
	{
		for (i=0;i<b;i++)
		{
			m=m+leapday[i];
		}
	}
	m=m+c;
	return m;
}
int main()
{
	int j,a,b,c,d,e,f,sum=0;
	int leapyear(int n);
	int count(int a,int b,int c);
	scanf("%d %d %d\n%d %d %d",&a,&b,&c,&d,&e,&f);
	if (a<d)
	{
	    for (j=a;j<d;j++)
		{
			if (leapyear(j)==0)
			{
				sum=sum+365;
			}
			else if (leapyear(j)==1)
			{
				sum=sum+366;
			}
		}
		sum=sum+count(d,e,f)-count(a,b,c);
	}
	else if (a==d)
	{
		sum=count(d,e,f)-count(a,b,c);
	}
	printf("%d",sum);
	return 0;
}
