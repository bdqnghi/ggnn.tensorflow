int main()
{
	int q,i=0,n,j,w;
	char s[200];
	cin>>n;
	cin.get();
	for(j=1;j<=n;j++)
	{
		i=0;
		w=0;
	cin.getline(s,199);
	if(s[0]!='_'&&((s[0]>'z'||s[0]<'a')&&(s[0]>'Z'||s[0]<'A')))
	{
		cout<<"no"<<endl;
		continue;
	}
	while(s[i]!='\0')
	{
		if(s[i]!='_'&&((s[i]>'z'||s[i]<'a')&&(s[i]>'Z'||s[i]<'A'))&&(s[i]<'0'||s[i]>'9'))
		{
			w=1;
			break;
		}
		i++;
	}
	if(w==1)
	{
		cout<<"no"<<endl;
		continue;
	}else if(w==0)
	{
		cout<<"yes"<<endl;
	}
    }
    cin>>q;
    return 0;
}