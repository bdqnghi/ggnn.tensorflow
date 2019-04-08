int main()
{
	int n,i,j;
	cin>>n;
	cin.get();
	char a[200][200];
	for(i=1;i<=n;i++)
		cin.getline(a[i],200);
	for(i=1;i<=n;i++)
	{
		if((a[i][0]!='_')&&((a[i][0]<'A')||((a[i][0]>'Z')&&(a[i][0]<'a'))||(a[i][0]>'z')))
			cout<<0<<endl;
		else
		{
			for(j=0;a[i][j]!='\0';j++)
			{	if((a[i][j]=='_')||((a[i][j]<='Z')&&(a[i][j]>='A'))||((a[i][j]>='a')&&(a[i][j]<='z'))||((a[i][j]>='0')&&(a[i][j]<='9')))
					continue;
				else
				{
					cout<<0<<endl;
				    break;
				}
			}
		if(a[i][j]=='\0')
			cout<<1<<endl;
		}
	}


	return 0;
}