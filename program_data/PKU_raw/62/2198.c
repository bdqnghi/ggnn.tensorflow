int main()
{
	char a[200];
	cin.getline(a,199);
	int length=strlen(a),i=0;
	for(i=0;i<length;i++)
	{
		if(i>0)
		{
			if(a[i]==32&&a[i-1]==32)
				continue;
			else
				cout <<a[i];
		}
		else
			cout <<a[i];
	}
	cout <<endl;
	return 0;
}
