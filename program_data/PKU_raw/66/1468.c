int main()
{
	char week[7][10]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	long int year;
	int i,month,day;
	cin>>year>>month>>day;
	int days[2][12]={{31,29,31,30,31,30,31,31,30,31,30,31},{31,28,31,30,31,30,31,31,30,31,30,31}};
	long int sum=0;
	sum=(year-1)+(year-1)/4-(year-1)/100+(year-1)/400;
	
	if(( (year%400)==0) || ( ((year%4)==0) && ((year%100)!=0) ) ) //???????
		for(i=0;i<month-1;i++)
			sum=sum+days[0][i];
	else 
		for(i=0;i<month-1;i++)
			sum=sum+days[1][i];

	sum=sum+day;  //???????????????????????????1 1 7?sum==1?????sum%7==0??SUN.?
	cout<<week[sum%7]<<endl;
	return 0;
}