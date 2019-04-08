char b,g;
char a[1000];
int l,i;
int main()
{
	cin >> a;
	l=strlen(a);
	b=a[0];
	g=a[l-1];
	int j;
	for(i=0;i<l;i++)
	if(a[i]==g)
		for(j=i-1;j>=0;j--)
			if(a[j]==b)
			{
				cout << j << " " << i << endl;
				a[j]=0;a[i]=0;
					break;
			}
	return 0;
}

