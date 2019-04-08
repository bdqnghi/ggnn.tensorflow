int main()
{
	char a[1001],b[1001];
	int c[1001]={0},i,t=0;
	cin.getline (a,1001);

	for ( i=0;a[i]!='\0';i++)
	{
		if (a[i]==a[i-1]||a[i]-a[i-1]==32||a[i-1]-a[i]==32)
		{
			c[t]++;
		}
		else
		{
			t++;
			b[t]=a[i];
			c[t]++;
		

		}
	}
	for (i=0;i<=1000;i++)
	{
		if (c[i]!=0)
		{
			if (b[i]-'a'>=0)
			{
				b[i]=b[i]-32;
			}
			cout << "(" << b[i] << "," << c[i] << ")";
		}
	}
	return 0;
}
