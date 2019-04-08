//****************************
//???????
//???2013.12.14
//****************************
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},year=0,mon=0,day=0,i=0,sum=0;
	cin>>year>>mon>>day;
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
	    a[1]=29;
	for(i=0;i<mon-1;i++)
		sum=sum+a[i];
	    sum=sum+day;
	cout<<sum<<endl;

	return 0;    
}