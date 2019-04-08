int main()
{
	char c;
	int n=0;
	while((c=getchar())!='\n')
	{
		if(c==' ')
		{
			if(n==0)//?n????????
			{cout<<' ';n++;}
			else
			{n++;}
		}
		else
		{
			cout<<c;
			n=0;
		}
	}
		return 0;
	}