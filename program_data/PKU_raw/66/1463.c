int main()
{
	int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	char weekday[7][10]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	int year,mon,day,leap;
	cin>>year>>mon>>day;
	int i,sum=0;
	sum=year-1+(year-1)/4-(year-1)/100+(year-1)/400;
	leap=(year%100!=0&&year%4==0||year%400==0);
	for(i=0;i<mon-1;i++)
		sum+=month[leap][i];
	sum=sum+day;
	cout<<weekday[sum%7]<<endl;
	return 0;
}
		

	
