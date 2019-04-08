int main()
{
	int n,m;
	char A[80];
	cin>>n;
	gets(A);
    for(int i=0;i<n;i++)
	{
		gets(A);
		m=strlen(A);
		int g=0;
		for(int j=0;j<m;j++)
		{
			if(!(A[j]>='a'&&A[j]<='z'||A[j]>='A'&&A[j]<='Z'||A[j]=='_'||A[j]>='0'&&A[j]<='9')||A[0]>='0'&&A[0]<='9')
				g=1;
		}
		if(g==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
    }
	return 0;
}

