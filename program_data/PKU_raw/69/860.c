int main()
{
	char a[300],b[300];
	unsigned int a1[300],b1[300];
	memset(a1, 0, sizeof(a1));
	memset(b1, 0,sizeof(b1));
	int i,j=0,k,l;
	cin.getline(a,300);
	cin.getline(b,300);
	int len1=strlen(a);
	int len2=strlen(b);
	if(len1==1&&len2==1&&a[0]=='0'&&b[0]=='0')
	{
		cout<<0;
		return 0;
	}
    for(i=len1-1;i>=0;i--)
	{
		a1[j]=a[i]-'0';
		j++;
	}
	j=0;
	 for(i=len2-1;i>=0;i--)
	{
		b1[j]=b[i]-'0';
		j++;
	}
	for( i=0;i<259;i++)
	{
		a1[i]=a1[i]+b1[i];
		if(a1[i]>=10)                 //???0?0 
		{
			a1[i]=a1[i]-10;
			a1[i+1]++;
		}
	}
	j=290;
	while(a1[j]==0) j--;
	for(i=j;i>=0;i--)
		cout<<a1[i];
	return 0;
}