int main(int argc, char *argv[])
{
	int m[10000], n[10000], s[10000], i;
	for (i=0;;i++)
	{
		cin >> n[i];
		cin >> m[i];
		if (n[i]==0&&m[i]==0)  break;
	}
	for (int j=0;j<i;j++)
	{   s[j]=0;
		for (int k=2;k<=n[j];k++)
		{
			s[j]=(s[j]+m[j])%k;
		}
	}
	for (int j=0;j<i;j++)
	{
		cout << s[j]+1 << endl;
	}
}