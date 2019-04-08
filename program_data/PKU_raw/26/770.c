int main()
{
	char x[100][10];
	int i=0;
	while(cin>>x[i])
	{
		if(cin.get()=='\n')break;
		i++;
	}
	for(int j=0;j<i;j++)
		cout<<x[j]<<' ';
	cout<<x[i]<<endl;
	return 0;
}