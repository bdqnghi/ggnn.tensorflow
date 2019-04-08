int main()
{
	int y=0,m=0,d=0,sum=0,i=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	if(y%400==0||(y%4==0&&y%100!=0))
		a[1]=29;
	for(i=0;i<=m-2;i++)
	{
		sum=sum+a[i];
	}
    sum=sum+d;
	cout<<sum<<endl;
	return 0;
}