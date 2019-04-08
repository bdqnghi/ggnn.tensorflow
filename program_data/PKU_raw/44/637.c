int reverse(int num)
{
	int i=0,s=0,remain=0;
	if(num==0)cout<<"0";
	if(num<0)
	{
		num=-num;
		cout<<"-";
		do
		{
			remain=num%10;
			if(remain!=0||s!=0)
			{cout<<remain;s++;}
			num=num/10;
			
		}while(num!=0);
	}
	if(num>0)
	{
		do
		{
			remain=num%10;
			if(remain!=0||s!=0)
			{cout<<remain;s++;}
			num=num/10;

		}while(num!=0);
	}
	cout<<endl;
	return 0;
}
int main()
{
	int i=0,num=0;
	for(i=0;i<6;i++)
	{
		cin>>num;
		reverse(num);
	}
	return 0;
}