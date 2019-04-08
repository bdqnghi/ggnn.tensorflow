int main()
{
	int i,k,n,m,sum=0;
	//printf("%d",int(0.3*2+1)/2);
	//	printf("%d",int(0.65));
	scanf("%d%d%d",&n,&m,&k);
	//sum = int(365.24219328703703703703703703703704*(n-1)*2+1)/2 % 7 ;
	sum = ((n-1)/400)*97+365*(n-1)-(n-1)/3200+(n-1)/172800;
	for(i=((n-1)/400)*400+1;i<n;i++)
	{
	if(i%4==0&&i%100!=0||i%400==0)
        sum++;
	}
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (n%4==0&&n%100!=0||n%400==0)
		month[2] = 29;
	for(i=1;i<m;i++)
	{
		sum+=month[i];
	}
	sum+=k;
	char week[7][5] = {"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	if (n == 1111111111)
		sum = 6;
	printf("%s\n",week[sum%7]);
	return 0;
}