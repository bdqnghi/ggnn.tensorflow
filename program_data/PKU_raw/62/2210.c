int main()
{
	char c[1000];
	int l;
	cin.getline(c,1000);
	l=strlen(c);
	for(int i=0;i<l;i++)
	{
		if((c[i]==' ')&&(c[i]==c[i+1]))
		{
			for(int j=i;j<l-1;j++)
			{
				c[j]=c[j+1];
			}
			l--;
			i--;
		}
	}
	for(int i=0;i<l;i++)
	{
		cout<<c[i];
	}
	return 0;
}
