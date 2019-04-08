int main()
{
	int n,i,j,len1,len2;
	char str1[101],str2[101];
	int a[100],b[100];
	cin>>n;
	while(n--)
	{
cin.get();
		len1=0;
		len2=0;
		cin.getline(str1,100);
		cin.getline(str2,100);
		while(str1[len1]!=0) 
			len1++;
		while(str2[len2]!=0)
			len2++;
		memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
		for(i=len1-1;i>=0;i--)
			a[len1-1-i]=str1[i]-'0';
		for(i=len2-1;i>=0;i--)
			b[len2-1-i]=str2[i]-'0';
		for(i=0;i<len1||i<len2;i++)
		{
			if(a[i]>=b[i]) a[i]-=b[i];
			else 
			{
				a[i]=a[i]+10-b[i];
				a[i+1]--;
			}
		}
		int count=99;
		while(a[count]==0) 
			count--;
		for(i=count;i>=0;i--)
		cout<<a[i];
cout<<endl;
	}
return 0;
}