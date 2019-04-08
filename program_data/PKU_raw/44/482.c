int main()
{
	int number=0,judge=0;//judge??????????0,number?????
	int i;
	void reverse(int num,int judge);//????
	for(i=0;i<6;i++)
	{
		cin>>number;//????
		if(number==0)//?????????0
			cout<<'0';
		else
		{
			if(number<0)
			{
				cout<<'-';
				number=-number;
			}
			reverse(number,0);
		}
	cout<<endl;
	}
	return 0;
}
void reverse(int num,int judge)
{
	if(num%10!=0||judge)
	{
		cout<<num%10;
		judge=1;
	}
	if(num/10!=0)
		reverse(num/10,judge);
}