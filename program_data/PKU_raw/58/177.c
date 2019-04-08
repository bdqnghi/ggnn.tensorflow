int main(){
	int n,i,j,p;
	char a[100],b[100];
	cin>>n;
	cin.getline(b,100);
	for(i=1;i<=n;i++)
	{
		cin.getline(a,100);
		p=1;
		for(j=0;j<strlen(a);j++)
		{
			if((a[0]>='a'&&a[0]<='z'||a[0]>='A'&&a[0]<='Z'||a[0]=='_')==0)
			{
				cout<<0<<endl;p=0;break;
			}
			else if((a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z'||a[j]=='_'||a[j]>='0'&&a[j]<='9')==0)
			{
				cout<<0<<endl;p=0;break;
			}
		}
		if(p==1)cout<<1<<endl;
	}
	return 0;
}