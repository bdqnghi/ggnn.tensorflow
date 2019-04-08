int main()
{
	int i;
	long int year[5],month[5],day[5],t[5];
	long int c[12]={0,31,60,91,121,152,182,213,244,274,305,335},b[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	for(i=0;i<=4;i++)
	{
		scanf("%ld %ld %ld",&year[i],&month[i],&day[i]);
		if(year[i]%4==0&&year[i]%100!=0||year[i]%400==0)t[i]=c[month[i]-1]+day[i];
		else t[i]=b[month[i]-1]+day[i];
	}
	for(i=0;i<=4;i++)printf("%ld\n",t[i]);
	return 0;
}

