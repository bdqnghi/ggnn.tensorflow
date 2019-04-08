int main()
{
	int money,num100,num50,num20,num10,num5,num1;
	cin>>money;
	if(money/100>0)
	{
		num100=money/100;
		money=money-100*num100;
		cout<<num100<<endl;
	}
	else
		cout<<"0"<<endl;
    if(money/50>0)
	{
		num50=money/50;
		money=money-50*num50;
		cout<<num50<<endl;
	}
    else
		cout<<"0"<<endl;

    if(money/20>0)
	{
		num20=money/20;
		money=money-20*num20;
		cout<<num20<<endl;
	}
    else
		cout<<"0"<<endl;
    if(money/10>0)
	{
		num10=money/10;
		money=money-10*num10;
		cout<<num10<<endl;
	}
    else
		cout<<"0"<<endl;
    if(money/5>0)
	{
		num5=money/5;
		money=money-5*num5;
		cout<<num5<<endl;
	}
    else
		cout<<"0"<<endl;
	cout<<money;
	return 0;
}