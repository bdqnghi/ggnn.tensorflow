int main()
{
	char a[101],b[101];
	int n,i;
	cin.getline(a,101);
	for(i=1;i<101;i++)
	{
		if(a[i]=='\0')
		{
			n=i;
			b[i-1]=a[i-1]+a[0];
			break;
		}
		else
			b[i-1]=a[i-1]+a[i];
	}
	for(i=0;i<n;i++)
		cout<<b[i];
	cout<<endl;
	return 0;
}