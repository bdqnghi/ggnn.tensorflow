int main( )
{
	int n,i;
	cin>>n;
	char str[3000][45];
	for(i=0;i<n;i++)
		cin>>str[i];
	i=0;
	while(i<n)
	{
		int len=strlen(str[i]);
		cout<<str[i];
		i++;
		while(i<n)
		{
			len=len+strlen(str[i])+1;
			if(len<=80)
				cout<<' '<<str[i];
			else
			{
				cout<<endl;
				break;
			}
			i++;
		}
	}
	return 0;
}