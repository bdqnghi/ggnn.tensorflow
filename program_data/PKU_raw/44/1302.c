void reverse ( int number )           //????????
{
	int result=0;	
	if (number>0 && number<10)       //????number??????????????
		cout<<number;
	else if (number>=10)             //????number?????????????
	{
		cout<<( number%10 );
		number=number/10;
		reverse ( number );
	}
}


int main()
{
	int number=0,i=0;
	for (i=0;i<6;i++)
	{
		cin>>number;
		if (number==0)               //?????????????
			cout<<number<<endl;
		else if (number>0)
		{
            while (number%10==0)             //??number?????0
	      	number=number/10;
			reverse (number);
			cout<<endl;
		}
		else if (number<0)
		{
			number=number*(-1);
			cout<<"-";
            while (number%10==0)             //??number?????0
	      	number=number/10;
			reverse (number);
			cout<<endl;
		}
	}
	return 0;
}

