
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,i,k,sum=0;
	cin>>year>>month>>day;
	if (year%400==0)  //????
		k=1;
	else if (year%100==0)
		k=0;
	else if (year%4==0)
		k=1;
	else
		k=0;
	if (k==1)
		a[1]=29;
	for (i=0;i<month-1;i++)
		sum+=a[i];
	sum+=day;
	cout<<sum<<endl;
	return 0;
}