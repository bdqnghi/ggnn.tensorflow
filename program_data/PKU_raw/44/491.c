int reverse(int num)
{
	int i,a;
		while(1)
		{
			if (num%10==0)
		     num=num/10;
			else
				break;
		}
		while(num>0)
		{

			a=num%10;
			cout<<a;
			num=(num-a)/10;
		}
		cout<<endl;
		return 1;
	}
int main()
{
	int i,num;
	for(i=0;i<=5;i++)
	{
		cin>>num;
		if(num==0)
			cout<<"0"<<endl;
		else
		{
			if (num>0)
				reverse(num);
			else
			{
				cout<<"-";
				reverse(-num);
			}
		}
	}
	return 0;
}