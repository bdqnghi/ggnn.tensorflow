int panduan (int n);
int main()
{
	int m,i,t=0;
	cin>>m;
	for (i=3;i*2<=m;i++)
	{
		t=0;
		if (i%2!=0&&(m-i)%2!=0)
		{
			t=panduan(i)+panduan(m-i);
			if (t==2)
				cout<<i<<" "<<m-i<<endl;
		}
	}
	return 0;
}

int panduan (int n)
{
	int j;
	for (j=2;j*j<=n;j++)
	{
		if (n%j==0)
			break;
	}
	if (j*j>n)
		return 1;
	else
		return 0;
}



