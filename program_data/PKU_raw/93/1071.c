int main()                                  //???
{                                           //?????
	int k,a,b,c;
	char n;                                 //????k(?????),a,b,c(???3,5,7????),n
	cin>>k;                                 //????
	a=k%3;
	b=k%5;
	c=k%7;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				cout<<3<<" "<<5<<" "<<7;
			else 
				cout<<3<<" "<<5;
		}
		else
		{
			if(c==0)
				cout<<3<<" "<<7;
			else
				cout<<3;
		}
	}
	else
	{
		if(b==0)
		{
			if(c==0)
				cout<<5<<" "<<7;
			else
				cout<<5;
		}
		else
		{
			if(c==0)
				cout<<7;
			else
				cout<<'n';
		}
	}
	return 0;
}                                                 //?????