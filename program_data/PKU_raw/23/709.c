int main()
{
	char s[15000],word[300][50];
	cin.getline(s,50000);

	int i=0,j=0,k=0,num=0;

	int len=strlen(s);
	for(i=0;i<len;i++)
		if(s[i]==' ')
			num++;

	for(i=0;i<len;i++)
	{
		if(s[i]!=' ')
		{
			word[j][k]=s[i];
			k++;
		}
		else if(s[i]==' ')
		{
			j++;
			k=0;
		}
	}
	cout<<word[num];
	for(i=num-1;i>=0;i--)
		cout<<" "<<word[i];
}

