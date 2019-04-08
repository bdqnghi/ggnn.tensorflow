int main()
{
	int a1[256]={0},a2[256]={0};
	char a11[255],a22[255];
	cin>>a11;
	cin>>a22;
	int len1,len2;
	len1=strlen(a11);
	len2=strlen(a22);
	int j=0;
	for(int i=len1-1;i>=0;i--)
		a1[j++]=a11[i]-'0';
	j=0;
	for(int i=len2-1;i>=0;i--)
		a2[j++]=a22[i]-'0';
	int temp=0;
	for(int i=0;i<201;i++)
	{
		a1[i]=a1[i]+a2[i];
		if(a1[i]>=10)
		{
			a1[i+1]++;
			a1[i]-=10;
		}
		if(a1[i])
			temp=i;
	}
	for(int j=temp;j>=0;j--)
		cout<<a1[j];
	return 0;
}