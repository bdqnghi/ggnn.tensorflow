int a[9001][9001]={0};
int main()
{
	int n,p,q,flag=0;
	cin >> n;
	for (p=0;p<n;p++)
	{
		a[p][p]=1;
	}
	while (cin >> p >> q)
	{
		if (p!=0 || q!=0)
			a[p][q]=1;
		else break;
	}
	for (p=0;p<n;p++)
	{
		int count=0;
		for (q=0;q<n;q++)
		{
			if ((p==q)||(p!=q&&a[q][p]==1&&a[p][q]==0))
				count++;
		}
		if (count==n)
		{
			cout << p << endl;
			flag=1;
		}
	}
	if (flag==0)
		cout << "NOT FOUND" << endl;
	return 0;
}

