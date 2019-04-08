int main ()
{
	int number=0,x=0;
	cin >>number;
	while (number!=1)                                                          //??while?????1????
	{
		if (number%2==1)                                                       //??????
		{	
			x=number;
		    number=number*3+1;
			cout <<x <<"*3+1=" <<number <<endl;
		}
		else                                                                   //??????
		{
			x=number;
			number=number/2;
			cout <<x <<"/2="<<number <<endl;
		}
    }
	cout <<"End";                                                              //??End??

	return 0;
}