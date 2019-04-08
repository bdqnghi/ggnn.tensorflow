int main()
{
	int i,j,year[2],month[2],day[2];
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<2;i++)
		cin>>year[i]>>month[i]>>day[i];
	int sum=0;
	for(i=year[0];i<year[1];i++)
	{
		sum+=365;
		if(i%4==0&&i%100!=0||i%400==0)
			sum++;
	}
	for(i=1;i<month[1];i++)
		sum+=mon[i];
	for(i=1;i<month[0];i++)
		sum-=mon[i];
	sum+=day[1];
	sum-=day[0];
	if((year[1]%4==0&&year[1]%100!=0||year[1]%400==0)&&month[1]>2)sum++;
	if((year[0]%4==0&&year[0]%100!=0||year[0]%400==0)&&month[0]>2)sum--;
	cout<<sum<<endl;
	return 0;
}