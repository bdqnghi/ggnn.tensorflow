
int main()
{
	int counter,i,j,n;
	char a[20];
	cin>>n;
	gets(a);
	for (j=0;j<n;j++)
	{
		char a[20];
		counter=0;
		gets(a);
		if ((a[0]>='a'&&a[0]<='z')||a[0]>='A'&&a[0]<='Z'||a[0]=='_')
		{
			for (i=1;a[i]!='\0';i++)
			{
				if (!((a[i]>='a'&&a[i]<='z')||a[i]>='A'&&a[i]<='Z'||a[i]=='_'||(a[i]>='0'&&a[i]<='9')))
				{
					counter++;
					cout<<"no"<<endl;
					break;
				}
			}
			if (!counter)
				cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
	return 0;
}