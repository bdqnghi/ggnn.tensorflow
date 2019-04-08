//**************************************
//*???????                     
//*????? 1100012780     	        
//*???2011.12.30                     
//**************************************
int main()
{
	int n;
	cin>>n;
	cin.get();
	int i;
	char words[1000][40];
	for (i = 0;i < n;i++)//????????
	{
		cin>>words[i];
	}
	int len[1000];
	for (i = 0;i < n;i++)//????????
		len[i] = strlen(words[i]);
	int line[100] = {0};//???????????
	int j = 0;
	cout<<words[0];
	line[0] = len[0];
	for (i = 1;i < n;i++)
	{
		if (line[j] + len[i] + 1 <= 80)//???????
		{
			cout << " " << words[i];
			line[j] += len[i] + 1;//???????
		}
		else//?????
		{
			cout << endl << words[i];
			j++;
			line[j] += len[i];
		}
	}
	return 0;
}
