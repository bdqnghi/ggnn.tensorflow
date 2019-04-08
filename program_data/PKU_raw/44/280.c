int reverse(int num);
int m;
int main ()
{
	int num;
	int i=0;
	while(cin>>num)
	{
		reverse(num);
		cout<<m<<endl;
	}
	return 0;
}
int reverse(int num)
{
	int n=0,i;
	if(num==0||num==-0)
	{
		m=0;
		return m;
	}
	else if(num<0)
	{
		i=abs(num);
			while(i!=0)
			{
				n=n*10+i%10;
		        i=i/10;
			}
			m=-n;
			return m;
	}
	else if(num>0)
	{	
		i=num;
		while(i!=0)
			{
				n=n*10+i%10;
		        i=i/10;
			}
		m=n;
			return m;
	
	}
}








