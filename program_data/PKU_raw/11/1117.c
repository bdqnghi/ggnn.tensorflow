

int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	int year,month,day,num=0;
	cin>>year>>month>>day;
	if((year%4==0 && year%100!=0)||(year%400==0))
		a[2]++;
	for(int i=1;i<month;i++)
		num+=a[i];
	num+=day;
	cout<<num<<endl;
	return 0;
}