
int main()
{
	char a[31];
	cin.getline(a,31,'\n');
	int i=0;
	while(i<=strlen(a))
	{
	if(a[i]<='9'&&a[i]>='0')
	{
		cout<<a[i];
		i++;
	}
	else if(a[i+1]<='9'&&a[i+1]>='0')
	{
		cout<<endl;
		i++;
	}
	else
		i++;
	}
	return 0;
}