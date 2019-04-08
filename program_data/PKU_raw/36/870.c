int main()
{
	char a[100],b[100];
	cin >> a >> b;
	int i,j,l1,l2,flag=0;
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		flag=1;
	else
		for(i=0;i<l1;i++)
		{
			int k=0;
			for(j=0;j<l2;j++)
				if(a[i]==b[j])
				{
					a[i]=0;
					b[j]=0;
					k=1;
				}
				if(k==0)
				{
					flag=1;
					break;
				}
		}
		if(flag==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		return 0;
}