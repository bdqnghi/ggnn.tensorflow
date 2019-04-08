int main()
{
	int a[200],b[200],len1,len2,n,k;
	char str1[200];char str2[200];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cin.get();
		cin.getline(str1,200);
		cin.getline(str2,200);
		len1=strlen(str1);
		len2=strlen(str2);
		k=0;
		for(int j=len1-1;j>=0;j--)
		{
			a[k]=str1[j]-'0';
			k++;
		}
		k=0;
		for(int j=len2-1;j>=0;j--)
		{
			b[k]=str2[j]-'0';
			k++;
		}
		for(int j=0;j<len1;j++)
		{
			a[j]=a[j]-b[j];
			if(a[j]<0)
			{
				a[j]=a[j]+10;
				a[j+1]--;
			}
		}
		for(int j=len1-1;j>=0;j--)
		{
			cout<<a[j];
		}
		cout<<endl;
	}
	return 0;
}



