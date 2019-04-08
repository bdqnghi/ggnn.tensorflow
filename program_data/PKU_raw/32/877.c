int main()
{
	char a[101],b[101];
	int A[100],B[100],ans[100];
	int line,len1,len2,len3;
	cin>>line;
	while(line>0)
	{
		cin>>a;
		cin>>b;
		len1=strlen(a);
		for(int i=len1-1,j=0;i>=0;i--,j++)
			A[j]=a[i]-'0';
		len2=strlen(b);
		for(int i=len2-1,j=0;i>=0;i--,j++)
			B[j]=b[i]-'0';
		for(int i=0;i<len2;i++)
		{
			if(A[i]>=B[i])
			   ans[i]=A[i]-B[i];
			else
			{
				A[i+1]--;
				ans[i]=A[i]-B[i]+10;
			}
		}
		for(int i=len2;i<len1;i++)
			ans[i]=A[i];
		if( len1==len2 && A[len1-1]==B[len2-1] )
			len1--;
		for(int i=len1-1;i>=0;i--)
			cout<<ans[i];
		cout<<endl;
		line--;
	}
	return 0;
}