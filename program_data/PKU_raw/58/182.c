int main()
{
	char a[150][80];
	int n,i,j,len_a,g;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		if((a[i][0]=='_')||(a[i][0]>='A')&&(a[i][0]<='Z')||(a[i][0]>='a')&&(a[i][0]<='z'))
		{
			g=0;
			len_a=strlen(a[i]);
			for(j=1;j<len_a;j++)
			{
				if ((a[i][j]=='_')||(a[i][j]>='A')&&(a[i][j]<='Z')||(a[i][j]>='a')&&(a[i][j]<='z')||
					(a[i][j]>='0')&&(a[i][j]<='9'))
					continue;
				else
				{
					g=1;
					break;
				}
			}
			if (g==0) cout<<1<<endl;
			else cout<<0<<endl;
		}
		else  cout<<0<<endl;
	}
	return 0;
}
