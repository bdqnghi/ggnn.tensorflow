
char word[100][33];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> word[i];
	for(int i=0;i<n;i++)
	{
		int len = strlen(word[i]);
		if(len>2&&word[i][len-2]=='e'&&word[i][len-1]=='r')
		{
			word[i][len-2] = 0;
		}
		else if(len>2&&word[i][len-2]=='l'&&word[i][len-1]=='y')
		{
			word[i][len-2] = 0;
		}
		else if(len>3&&word[i][len-3]=='i'&&word[i][len-2]=='n'&&word[i][len-1]=='g')
		{
			word[i][len-3] = 0;
		}
		cout << word[i] << endl;
	}
}