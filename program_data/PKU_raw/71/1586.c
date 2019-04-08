int main()
{
int n,year,month1,month2;
int leap;
int days=0;
cin>>n;
while(n--)
{
cin>>year>>month1>>month2;
int temp;
if(month1>month2)
{
	temp=month2;
	month2=month1;
	month1=temp;
}
if(year%400==0||(year%4==0&&year%100!=0))
	leap=0;
else leap=1;
int day[2][12]={31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
for(int i=month1;i<month2;i++)
	days+=day[leap][i-1];
if(days%7==0)
	cout<<"YES"<<endl;
else cout<<"NO"<<endl;
days=0;
}

return 0;
}