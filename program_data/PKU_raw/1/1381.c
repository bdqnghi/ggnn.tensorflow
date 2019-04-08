int a,n,sum=0;
void t(int m)
{
	int i,j;
	for(i=m;i<=a;i++)
	{
		if(a%i==0)
		{
			a=a/i;
			if(a==1)
			{
				sum+=1;
			}
			else t(i);
				a=a*i;
		}
	}
}

int main()
{
	int k;
	cin >> n;
	for(k=0;k<n;k++)
	{
		sum=0;
		cin >> a;
		t(2);
		cout << sum << endl;
	}
	return 0;
}