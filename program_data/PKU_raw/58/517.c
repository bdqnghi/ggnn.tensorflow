int main()//?????
{
	int n,i,j,p,b[100][81];
	char a[100][81];//????
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
			cin.getline(a[i],81);//??
	for(i=0;i<n;i++)
		for(j=0;j<strlen(a[i]);j++)
			b[i][j]=a[i][j];//b[i][j]???a[i][j]?ascii?
	for(i=0;i<n;i++)
	{
		if(!(b[i][0]=='_'||(b[i][0]>='a'&&b[i][0]<='z')||(b[i][0]>='A'&&b[i][0]<='Z')))//????????
		{
			cout<<0<<endl;//??
			continue;
		}
		p=1;//??
		for(j=1;j<strlen(a[i]);j++)
			if(!(b[i][j]=='_'||(b[i][j]>='a'&&b[i][j]<='z')||(b[i][j]>='A'&&b[i][j]<='Z')||(b[i][j]>='0'&&b[i][j]<='9')))//????????
			{
				p=0;//??
				break;
			}
			cout<<p<<endl;//??
	}
	return 0;
}//?????