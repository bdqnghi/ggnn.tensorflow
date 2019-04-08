int main ()
{
	int t,i,j,b;
	char c[10000];
	cin>>t;
	getchar();
	for(i=0;i<t;i++)
	{
		int a[123]={0};
		cin.getline(c,10000);
		b=0;
		for(j=0;c[j]!='\0';j++)
			a[c[j]]++;
		for(j=0;c[j]!='\0';j++)
			if(a[c[j]]==1)
			{
				b=1;
				cout<<c[j]<<endl;
				break;
			}
		if(b==0)
			cout<<"no"<<endl;
	}
	return 0;
}