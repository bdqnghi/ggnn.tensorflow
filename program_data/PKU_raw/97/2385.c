int main()
{
	int note100=0,note50=0,note20=0,note10=0,note5=0,note1=0,i,j,money;
	cin>>money;
	while(money>=100)
	{
		money=money-100;
		note100++;
	}
	while(money>=50)
	{
		money=money-50;
		note50++;
	}while(money>=20)
	{
		money=money-20;
		note20++;
	}while(money>=10)
	{
		money=money-10;
		note10++;
	}while(money>=5)
	{
		money=money-5;
		note5++;
	}while(money>=1)
	{
		money=money-1;
		note1++;
	}
	cout<<note100<<endl<<note50<<endl<<note20<<endl<<note10<<endl<<note5<<endl<<note1;
	return 0;
}