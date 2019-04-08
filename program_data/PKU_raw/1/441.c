void TRY(int,int);
int num=1;
int main()
{
	unsigned short int n;
	int INTEGER;
	cin>>n;
	while(n-->0)
	{
		cin>>INTEGER;
		int h=2;
		TRY(h,INTEGER);
		cout<<num<<endl;
		num=1;
	}
}
void TRY(int a,int b)
{
	int i;
	for(i=a;i<=sqrt(b);i++)
	{
		if((b%i==0)&&(b/i!=1))
		{
			num++;
			TRY(i,b/i);
		}
	}
}