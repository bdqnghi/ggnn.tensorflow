int prime(int n)
{
	int i,judge=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			judge=0;
	}
		return judge;
}
int function(int number,int x)
{
	int temp=0,i,result=0;
	if(!prime(number))
	{
		for(i=x;i<=number;i++)
			if(number%i==0)
			{
				x=i;
				temp=number/i;
				result+=function(temp,x);
			}
	}
	else if((number>=x||number==1)&&prime(number))
		result=1;
	return result;
}
int main()
{
	int i,times,number;
	cin>>times;
	for(i=0;i<times;i++)
	{
		cin>>number;
		cout<<function(number,2)<<endl;
	}
	return 0;
}
