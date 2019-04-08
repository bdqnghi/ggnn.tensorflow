
int main()
{
	char str[101];
	char word[51][20];
	char word1[20],word2[20];

	gets(str);
	cin>>word1>>word2;
	int point,i,counter;
	counter=1;i=0;
	for (point=0;str[point]!='\0';point++)
	{
		if (str[point]==' ')
		{
			word[counter][i]='\0';
			counter++;i=0;
		}
		else
		{
			word[counter][i]=str[point];
			i++;
		}
	}
	word[counter][i]='\0';

	int k;
	for (k=1;k<=counter;k++)
	{
		int flag=0;
		for (i=0;word1[i]!='\0';i++)
		{
			if (word[k][i]!=word1[i]) flag=1;
		}
		if (flag==0) cout<<word2;
		else cout<<word[k];
		if (k!=counter) cout<<' ';
	}
	return 0;
}