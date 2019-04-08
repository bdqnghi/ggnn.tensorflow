int abc(int c,int d,int e)
{
	c=c*d/(d-1)+e;
	return c;
}
void Sum(int a,int b)
{
	int m=1,i=1,j=0;
	while (j != a)
		{
			m=i;
			for (j=0;j<a;j++)
				if (m%(a-1) == 0)
					m=abc(m,a,b);
				else
					{
						i++;
						break;
					}
		}
	cout << m << endl;
}

int main()
{
	int n,k;
	cin >> n >> k;
	Sum (n,k);
	return 0;
}
