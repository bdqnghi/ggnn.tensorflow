int main()
{
	int reverse(int num1);
	int num1,num2=0;
	while(cin>>num1)
	{
		num2=reverse(num1);
		cout<<num2<<endl;
	}
	return 0;
}

int reverse(int num1)
{
	int num[1000],i,j,num2=0;
	for(i=0;;i++)
	{
		if(num1/10==0)
		{
			num[i]=num1;
			break;
		}
		else
		{
				num[i]=num1%10;
				num1=num1/10;
	     }
	}
	for(j=0;j<=i;j++)
	{
		num2=10*num2+num[j];
	}
	return(num2);
}