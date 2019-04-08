int main()
{
	int a[16], i, b, j, k, m;
	a[1]=1;
	while (a[1]!=-1)
	{
		i=1;
		m=0;
		while (cin >> b)
		{
			a[i]=b;
			if(a[i]==0||a[i]==-1)
			break;
			i=i+1;
		}
		for (j=1;j<=i-1;j++)
		{
			for (k=1;k<=i-1;k++)
			{
				if (a[j]==2*a[k])
					m++;
			}
		}
		if (a[i]!=-1)
		cout << m << endl;
	}
	return 0;
}
