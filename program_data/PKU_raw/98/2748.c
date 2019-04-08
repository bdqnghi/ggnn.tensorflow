
char words[10000][50]={0};
int main()
{
//	freopen("in.in","r",stdin);
	int n;
	cin>>n;
	cin.get();
	int i=0;
	for (i = 0; i<n; i++)
		scanf("%s",words[i]);
	
	int count=0;
	int current=0;
	cout<<words[count];
	current=strlen(words[count]);
	count++;
	while(count<n)
	{
		if (current+strlen(words[count])+1 > 80)
		{
			cout<<endl<<words[count];
			current=strlen(words[count]);
		}
		else if (current+strlen(words[count])+1 == 80)
		{
			cout<<" "<<words[count]<<endl;
			current=0;
		}
		else if (current+strlen(words[count])+1 < 80)
		{
			if (current)
			{
				cout<<" ";
				current++;
			}
			cout<<words[count];
			current+=strlen(words[count]);
		}
		count++;
	}

	return 0;
}