long times(int a ,int n)
{
	long sum =1;
	for (int i = 1;i<=n;i++)
	{
		sum*=a;
	}
	return sum;
}
long input(char n[1000],int a)
{
	int la;
	long out= 0;
	la = strlen(n);
	for (int i = la-1;i>=0;i--)
	{
		if (n[i]<=57)
		{
			int p;
			p = (int)n[i]-48;
			out+= ((long)p) *times(a,(la-i-1));
		}
		else
		{
			if (n[i]<=90)
			{
				int p;
				p = (int)n[i]-55;
				out+= ((long)p)*times(a,(la-i-1));
			}
			else
			{
				int p ;
				p = (int)n[i]-87;
				out+=((long)p)*times(a,(la-i-1));
			}
		}
	}
	return out;
}
int main()
{
	int a ,b;
	char n[1000];
	cin>>a>>n>>b;
	long out;
	out = input(n,a);
	char on[1000];
	int la;
	la = strlen(n);
	int l;
	for (l = 1; out/(long)b >= times(b,l-1);l++)
	{
	}
	for (int i = 0;i<l;i++)
	{
		int p;
		for (p = 0;out-times(b,(l-1-i))>=0;p++)
		{
			out-=times(b,(l-1-i));
		}
		if (p<=9)
		{
			on[i]=(char)(p+48);
		}
		else
		{
			on[i]=(char)(p+55);
		}
	}
	on[l]='\0';
	cout<<on;

}
