void reverse( int num);
int main()
{

	
	int num;
	for(int i=0;i<6;i++)
	{
		cin>>num;
		if(num==0||num==-0)
			cout<<"0";
		else
		{
			reverse(num);
		}
	}
	return 0;
}
void reverse(int num)
{
	int x;
	if (num<0)
	{
		num=0-num;
		cout<<'-';
	}
	if(num!=0)
	{
		if(num%10==0)
		{
			for(;num%10==0;)
				num/=10;
			for(;num!=0;num/=10)
			{
				x=num%10;
				cout<<x;
			}
			cout<<endl;
		}
		else
		{
			for(;num!=0;num/=10)
			{
				x=num%10;
				cout<<x;
			}
			cout<<endl;
		}
	}
		
}