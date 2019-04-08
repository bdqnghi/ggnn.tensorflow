int main()
{
	int n,s;
	cin>>n;
	char a[n][20],*p=a[0];
	for(int i=0;i<n;i++)
		cin>>a[i];
	s=strlen(a[0]);
	cout<<a[0];
	for(int i=1;i<n;i++)
		{
		s+=strlen(a[i])+1;
		if(s<=80)
			cout<<" "<<(p+i*20);
		else
		{
			cout<<endl<<(p+i*20);
			s=strlen(a[i]);
		}
		}
}