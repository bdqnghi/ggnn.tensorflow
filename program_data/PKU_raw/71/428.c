
int day(int y,int m)
{
	int flag,days=0,i;
	if((y%100!=0&&y%4==0)||y%400==0)
		flag=1;
	else flag=0;
	int month[13]={0,31,28+flag,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<m;i++)
		days+=month[i];
	return days;
}

int main()
{
   int n;
   cin>>n;
   while(n--)
   {
   int y,m1,m2,s;
   cin>>y>>m1>>m2;
   s=abs(day(y,m1)-day(y,m2));
   if(s%7==0)
        cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   }
   return 0;
}