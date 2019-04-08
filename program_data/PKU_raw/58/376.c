int main()
{
	char ch[800][1000];
	int i,j,n,m=0;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin.getline(ch[i],100,'\n');
	}
	for(i=1;i<=n;i++)
	{
		if(ch[i][0]=='_'||(ch[i][0]<='z'&&ch[i][0]>='a')||(ch[i][0]<='Z'&&ch[i][0]>='A'))
		{
			    for(j=0;j<=(strlen(ch[i])-1);j++)
				{
					if(ch[i][j]!='_'&&(!(ch[i][j]<='z'&&ch[i][j]>='a'))&&(!(ch[i][j]<='Z'&&ch[i][j]>='A'))&&(!((ch[i][j]<='9'&&ch[i][j]>='0'))))
					{
						m++;
					}
				}	
			    if(m!=0)
				{
					cout<<"0"<<endl;
				}
                else
				{
					cout<<"1"<<endl;
				}
				m=0;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;

}