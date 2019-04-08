int reverse(int num)
{
	int a,i;
	for(i=0;i<100;i++)       //????????0??
	{
		if(num%10!=0)
			break;
		else
			num=num/10;
	}
	while(num>0)           //????
	{
		a=num%10;
		cout<<a;
		num=num/10;
	}
	cout<<endl;
	return 1;
}
int main()
{
	int num=0,i=0;
	for(i=0;i<6;i++)
	{
		cin>>num;
		if(num==0)           //??0?
			cout<<"0"<<endl;
		else
		{
			if(num>0)
				reverse(num); //????
			else
			{
				cout<<"-";    //????
				reverse(-num);
			}
		}
	}
	return 0;
}
