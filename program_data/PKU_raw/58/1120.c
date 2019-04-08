int main()
{
	int n,i,j,k;//??????n?????ij???k
	char a[100];//?????a
	cin>>n;
	cin.getline(a,100);
	for(i=1;i<=n;i++)
	{
		k=1;
		cin.getline(a,100);
		if((a[0]<'A')||((a[0]>'Z')&&(a[0]!='_')&&(a[0]<'a'))||(a[0]>'z'))
			k=0;
		for(j=1;j<strlen(a);j++)
			if((a[j]<'0')||((a[j]>'9')&&(a[j]<'A'))||((a[j]>'Z')&&(a[j]!='_')&&(a[j]<'a'))||(a[j]>'z'))
				k=0;
		cout<<k<<endl;//?????
	}
	return 0;
}
