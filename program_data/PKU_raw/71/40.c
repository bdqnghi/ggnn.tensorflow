int main()
{
	int n,year,m1,m2,i,tmp,sum,k,q;
	scanf("%d",&n);
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&year,&m1,&m2);
		if(m1>m2)
		{
			tmp=m1;
			m1=m2;
			m2=tmp;
		}
		else q=1;

		if((year%4==0&&year%100!=0)||(year%400==0))
		{
			sum=0;
			for(k=m1;k<m2;k++)
			{
				sum+=b[k-1];
			}
			if(sum%7==0)printf("YES\n");
			else printf("NO\n");
		}
		else 
			{
			sum=0;
			for(k=m1;k<m2;k++)
			{
				sum+=a[k-1];
			}
			if(sum%7==0)printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;


}

