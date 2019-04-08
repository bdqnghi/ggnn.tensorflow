
int main()
{	char a,ch;
	int sum;

	a='0';
	while(cin>>ch)
	{
		if(ch>96) ch-=32;
		if(ch!=a)
		{
			if(a!='0') printf("(%c,%d)",a,sum);
			a=ch;sum=1;
		}
		else sum++;
	}
	printf("(%c,%d)",a,sum);


	return 0;
}
