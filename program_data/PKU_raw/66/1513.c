int main()                             //????????2?????????????
{
	int year,month,day,i,j;
	char week[7][7]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	long sum1=0;                                       //?400???????
	for(i=1;i<401;i++)
	{
		sum1=sum1+365;
		if(i%4==0&&i%100!=0||i%400==0)
			sum1++;
		sum1%=7;                                    //????
	}
	cin>>year>>month>>day;
	int num=(year-1)/400;
	long sum=num*sum1;
	sum%=7;
	year=year-num*400;                                //??????
	for(i=1;i<year;i++)
	{
		sum+=365;
		if(i%4==0&&i%100!=0||i%400==0) sum++;                              //???????????
		sum%=7;
	}
	
	if(year%4==0&&year%100!=0||year%400==0)mon[2]++;
	for(i=1;i<month;i++)
		sum+=mon[i];
	sum+=day;
	sum--;
	sum=sum%7;
	cout<<week[sum]<<endl;
	return 0;
}
	
