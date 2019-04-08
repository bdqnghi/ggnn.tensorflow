int main ()
{
	char str[100];
	char str1[100][100];
	cin.getline(str,100);
	int i=0;
	int j=0;
	for (i=0;i<100;i++)
	{
		for (j=0;j<100;j++)
			str1[i][j]='#';
	}
	int len=0;
	i=0;
	while (str[i]!='\0')
	{
		len++;
		i++;
	}
	int n=0;
	int p=0;
	for (i=0;i<len;i++)
	{
		if (str[i]==' ')
		{
			n++;
			p=i+1;
		}
		else
			str1[n][i-p]=str[i];
	}
	int k=0;
	for (i=n;i>0;i--)
	{
		k=0;
		while (str1[i][k]!='#')
		{
			cout<<str1[i][k];
			k++;
		}
		cout<<" ";
	}
	k=0;
	while (str1[0][k]!='#')
	{
		cout<<str1[0][k];
		k++;
	}
	return 0;
}
