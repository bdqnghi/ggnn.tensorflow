int main()
{
char a[7]={'0','0','0','0','0','0','0'};
cin>>a;
int ava=0;
for (int j=6;j>=0;j--)
{
	if (ava==1)
	{
		cout<<a[j];
	}
		if (a[j]!='0')
	{
		ava=1;
	}
}
return 0;
}

	