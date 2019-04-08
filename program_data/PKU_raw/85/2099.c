int main ()
{
	int n,i,j;
	char a[60];
	cin >>n;
	for ( i=0;i<n;i++)
	{
		cin >>a;
		if (a[0]!='_'&&((a[0]<='Z'&&a[0]>='A')==0)&&((a[0]<='z'&&a[0]>='a')==0))
			cout <<"no"<<endl;
		else 
		{
			for ( j=0;a[j]!='\0';j++)
			{
				if (a[j]!='_'&&(a[j]>'Z'||a[j]<'A')&&(a[j]>'z'||a[j]<'a')&&(a[j]>'9'||a[j]<'0'))
				{
					cout <<"no"<<endl;
					break;
				}
			}
			if (a[j]=='\0')
				cout <<"yes"<<endl;
		}
	}

	return 0;
}