struct book
{
	int num;
	char name[27];
};
int main()
{
	int n,i,j,l,sum[26],t=0,T=0;struct book a[1000];memset(sum,0,sizeof(sum));char A;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i].num >> a[i].name;
		l=strlen(a[i].name);
		for(j=0;j<l;j++)
		{
			sum[a[i].name[j]-'A']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(sum[i]>t)
		{
			t=sum[i];T=i;
		}
	}
	A='A'+T;
	cout << A << endl;
	cout << t << endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<27;j++)
		{
			if(a[i].name[j]==A)
				cout << a[i].num << endl;
		}
	}
	return 0;
}