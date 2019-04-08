int main()
{
	int n;
	char str1[101],str2[101];
	int a1[100],a2[100];
	cin>>n;
	int l1,l2;
	for(int i=0;i<n;i++)
	{
		cin>>str1>>str2;
		memset(a1,0,sizeof(a1));
		memset(a2,0,sizeof(a2));
		l1=strlen(str1);
		l2=strlen(str2);
		int k1=0,k2=0;
		for(int j=l1-1;j>=0;j--)
			a1[k1++]=str1[j]-'0';
		for(int j=l2-1;j>=0;j--)
			a2[k2++]=str2[j]-'0';
		for(int j=0;j<100;j++)
		{
			a1[j]=a1[j]-a2[j];
			if(a1[j]<0)
			{
				a1[j]+=10;
				a1[j+1]--;
			}
		}
		int k=99;
		while(a1[k]==0) k--;
		for(;k>=0;k--)
			cout<<a1[k];
		cout<<endl;
	}
	return 0;
}