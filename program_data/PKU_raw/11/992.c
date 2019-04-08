int main ()
{
	int leap,year,month,day,sum=0;
	int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31,},{31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>year>>month>>day;
	leap=((year%400==0)||(year%100!=0 && year%4==0));
	for (int i=0;i<month-1;i++)
	   sum=sum+a[leap][i];
	sum=sum+day;
	cout<<sum<<endl;
	return 0;

}
