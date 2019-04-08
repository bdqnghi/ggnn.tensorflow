
int main() {
	char input[101];
	cin.getline(input,101);
	int inputlen=strlen(input);
	int sumblank=0;
	for (int i=0;i<=inputlen-1;++i)
	{
		if (input[i]==' ')
			++sumblank;
	}
	char word[100][101];
	int i=0;
	int k=0;
	for (int j=0;j<=inputlen-1;++j)
	{
		if (input[j]==' ')
		{
			++i;
			k=0;
		}
		else
		{
			word[i][k]=input[j];
			++k;
		}
	}
	for (int i=sumblank;i>=0;--i)
	{
		if (i==sumblank)
			cout <<word[i];
		else
			cout <<" "<<word[i];
	}
    
	return 0;
}