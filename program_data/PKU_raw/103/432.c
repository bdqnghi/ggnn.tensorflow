int main()
{
	char a[1001]; cin>>a;
	int i,j; int l=strlen(a); int t;char temp;
	for (i=0;i<l;i++) if (a[i]>='a'&&a[i]<='z') a[i]=a[i]+'A'-'a';
	for (i=0;i<l;i++)
	{
		t=0;
		for (j=i;;j++)
			if (a[j]==a[i]) t=t+1;
			else break;
		 temp=a[i];
		cout<<'('<<temp<<','<<t<<')';
		i=i+t-1;
	}
	return 0;
}
