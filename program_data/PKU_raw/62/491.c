int main()
{
	int i,j=0;
	char word1[100]={'\0'},word2[100]={'\0'};
	cin.getline(word1,100);
	for(i=0;;i++)
	{
		if(word1[i]=='\0')
			break;
		if(word1[i]!=' ')
		{
			word2[j]=word1[i];
			j++;
		}

		if(word1[i]==' '&&word1[i+1]!=' ')
		{
			word2[j]=word1[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
		cout<<word2[i];
	return 0;
}