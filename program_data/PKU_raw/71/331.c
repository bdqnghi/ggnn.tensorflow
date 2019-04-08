int main()
{
	int n,i,j,year,m1,m2,temp,s[12]={0},h=0;
	scanf("%d",&n);
	for(i=1;i<=12;i++)
		{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
	    	s[i-1]=31;
        else 
			if(i!=2)
			s[i-1]=30;
		}
	for(j=0;j<n;j++)
	{
		scanf("%d%d%d",&year,&m1,&m2);
		if(m1>m2)
		{
			temp=m2;
			m2=m1;
			m1=temp;
		}
		if(year%400==0||(year%4==0&&year%100!=0))
			s[1]=29;
		else
			s[1]=28;
		for(i=m1;i<m2;i++)
			h=h+s[i-1];
		if(h%7==0)
			printf("YES\n");
		else
			printf("NO\n");
		h=0;
	}
	return 0;
}