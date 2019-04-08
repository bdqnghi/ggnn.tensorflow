int main()
{
	int year[2],month[2],day[2],a[][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31},i,j,flag[2];
	int count[2]={0,0},b[2]={365,366},c[2]={0,0}/*????????????????*/;
	for(i=0;i<2;i++)
	{
		cin>>year[i]>>month[i]>>day[i];
	}
	if(year[0]>year[1])
	{
		j=year[1];
		year[1]=year[0];
		year[0]=j;
		j=month[1];
		month[1]=month[0];
		month[0]=j;
		j=day[1];
		day[1]=day[0];
		day[0]=j;
	}
	flag[0]=year[0]%4==0&&year[0]%100!=0||year[0]%400==0;
	flag[1]=year[1]%4==0&&year[1]%100!=0||year[1]%400==0;
	count[0]+=day[0]-1;
	count[1]+=day[1]-1;
	for(i=0;i<2;i++)
	{
		while(c[i]+1<month[i])
		{
				count[i]+=a[flag[i]][c[i]];
				c[i]++;
		}
	}
	while(year[0]<year[1])
	{
		count[1]+=b[year[0]%4==0&&year[0]%100!=0||year[0]%400==0];
		year[0]++;
	}
	cout<<count[1]-count[0]<<endl;
	char mm;
	cin>>mm;
	return 0;
}
