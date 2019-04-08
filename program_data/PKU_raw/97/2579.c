int main()
{
	int money,change[6]={0},i,mon[6]={100,50,20,10,5,1},p;
	cin>>money;
	for(i=0;i<6;i++)
	{
		p=money;
		change[i]=money/mon[i];
		money=p-change[i]*mon[i];
	}
	for(i=0;i<6;i++)
	{
		cout<<change[i]<<endl;
	}
	return 0;
}