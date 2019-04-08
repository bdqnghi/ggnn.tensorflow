int main()
{
	char str[100][100];
	int i,j;
	for(i=0; ;i++)
	{
		cin>>str[i];
		if(cin.get()=='\n')
			break;
	}
	for(j=0;j<i;j++)
		cout<<str[j]<<" ";
	cout<<str[i];
	cout<<endl;
	return 0;
}