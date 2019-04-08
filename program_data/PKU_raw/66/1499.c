int main ()
{
    int sum=0;
	int year,month,day,leap1,step=0;
	cin>>year>>month>>day;
	leap1=((year%400==0)||(year%100!=0 && year%4==0));
	char b[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31,},{31,29,31,30,31,30,31,31,30,31,30,31}};
    step=(year-1)/4-(year-1)/100+(year-1)/400;
    sum+=step*2+year-step-1;
	for (int j=0;j<month-1;j++)
		sum+=a[leap1][j];
	sum+=day-1;
	cout<<b[sum%7]<<endl;
	return 0;
}
