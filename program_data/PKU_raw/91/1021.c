int main()
{
	char a[1000];
	cin.getline(a,1000);
	char f=a[0];
	int i=0;
	while(a[i+1])
		a[i++]=a[i]+a[i+1];
	a[i]+=f;
	cout<<a;

	return 0;
}