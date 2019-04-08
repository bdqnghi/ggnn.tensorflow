char a[1000];
int main()
{   
    int Judge();
	int n;
	cin>>n;
	cin.get();
	int i;
	for(i=1;i<=n;i++)
	{
		memset(a,0,sizeof(a));
		cin.getline(a,1000);
		cout<<Judge()<<endl;
	}
	  		return 0;
}
int Judge()
{
	int i;
	int p=0;
	if((a[0]>='A'&&a[0]<='Z')||((a[0]<='z')&&(a[0]>='a'))||(a[0]=='_'))
		p=1;
	for(i=0;a[i]!='\0';i++)
		if((a[i]>='A'&&a[i]<='Z')||((a[i]<='z')&&(a[i]>='a'))||(a[i]=='_')||((a[i]>='0')&&a[i]<='9')){}
		else
		p=0;
	return p; 
}
