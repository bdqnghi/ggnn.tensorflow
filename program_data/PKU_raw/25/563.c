int r[100]={0};

int main()
{
	int n;
	cin>>n;
	r[0]=2;
	if (n==0)
		cout<<'1';
	else
		if (n==1)
			cout<<'2';
		else
		{

			for (int i=2;i<=n;i++)
			{
				for (int i=0;i<100;i++)
				{
					r[i]=r[i]*2;
				}
				for (int i=0;i<100;i++)
				{
					r[i+1]+=r[i]/10;
					r[i]=r[i]%10;
				}
			}
			int start=0;
			for (int i=0;i<100;i++)
			{
				if 	(r[100-i-1]!=0)
				{
					start=100-i-1;
					break;
				}

			}

			for (int i=start;i>=0;i--)
			{
				cout<<r[i];
			}
		}

		return 0;
}