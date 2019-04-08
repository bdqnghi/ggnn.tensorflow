int main()
{
	char a[20];
	int n;
	cin>>n;
	int count=0;
	for (int i=1;i<=n;i++)
	{
		cin>>a;
		int j;
		if (a[0]!='_' && (a[0]<65 || a[0]>122 || (a[0]>90 && a[0]<97) ) )  //:????????????????
		{
			j=0;
			goto stop1;
		}
		for (j=1;a[j]!='\0';j++)
		{
			if ( a[j]!='_' && (a[j]<48 || (a[j]>57&&a[j]<65) || (a[j]>90&&a[j]<97) || a[j]>122) )  //:?????????????????
			{
				break;
			}
		}
stop1:	if (j==strlen(a))
		{
			cout<<"yes"<<endl;
			count++;
		}
		else 
		{
			cout<<"no"<<endl;
			count++;
		}
		if (count==n)
			return 0;
	}
	return 0;
}
