/*
 * ???: 1000010191_test4_2.cpp
 * ??: ???
 * ????: 2010-12-24
 * ??: ?????
 */


int main()
{
	int n;
	cin>>n;
	for (int k=1;k<=n;k++)
	{
		//??
		char sa[101],sb[101];
		cin>>sa>>sb;
		//??
		int la=strlen(sa),lb=strlen(sb);
		//??
		int a[101]={0},b[101]={0};
		for (int i=1;i<=la;i++)
			a[i]=sa[la-i]-'0';
		for (int i=1;i<=lb;i++)
			b[i]=sb[lb-i]-'0';
		//??
		for (int i=1;i<=la;i++)
		{
			a[i]-=b[i];
			if (a[i]<0)
			{
				a[i]+=10;
				a[i+1]--;
			}
		}
		//??
		while (a[la]==0) la--;
		for (int i=la;i>0;i--) cout<<a[i];
		cout<<endl;
	}
	return 0;
}
