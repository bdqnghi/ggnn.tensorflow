int main()
{
	char a[110];
	int i,j,k,l,m,n,x;
	while(cin.getline(a,110))//??
	{
	n=strlen(a);
	for(m=0;m<n;m++)
	{cout<<a[m];}
	cout<<endl;//??????
	for(i=0;i<n;i++)
	{
		if(a[i]==')')
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]=='(')
				{
					a[i]=' ';a[j]=' ';break;//??????
				}
			}
		}
	}
	for(k=0;k<n;k++)
	{
		if(a[k]!='('&&a[k]!=')')
		{a[k]=' ';}
		if(a[k]=='(')
		{a[k]='$';}
		if(a[k]==')')
		{a[k]='?';}//???????
	}
	for(m=0;m<n;m++)
	{
		cout<<a[m];//??
	}
	cout<<endl;
	}
	return 0;
}