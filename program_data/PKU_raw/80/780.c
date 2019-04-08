int main()
{
	int year1,year2,month1,month2,day1,day2,s=0,s1=0,s2=0,i,j,k;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},
		b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d\n",&year1,&month1,&day1);
	scanf("%d%d%d",&year2,&month2,&day2);
	for(i=year1;i<=year2;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			s=s+366;
		else
			s=s+365;}
	if((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
	{
		for(j=month1-1;j<=11;j++)
		{if(j==month1-1)
				s1=s1+b[j]-day1;
			else
				s1=s1+b[j];}
	s=s-(366-s1);}
	else
	{
		for(j=month1-1;j<=11;j++)
		{if(j==month1-1)
				s1=s1+a[j]-day1;
			else
		        s1=s1+a[j];}
	s=s-(365-s1);}
	if((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
	{
		for(k=month2-1;k>=0;k--)
		{if(k==month2-1)
			s2=s2+day2;
			else
			s2=s2+b[k];}
		s=s-(366-s2);
	}
	else
	{
		for(k=month2-1;k>=0;k--)
		{if(k==month2-1)
				s2=s2+day2;
			else
			s2=s2+a[k];}
		s=s-(365-s2);
	}
	printf("%d",s);
	return 0;
}
	









	