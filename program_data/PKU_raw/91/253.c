int main()
{
	char a[1000];
	cin.getline(a,1000);
	int a0=(int) a[0];
	for(int i=0;i<strlen(a)-1;i++)
		cout<<(char)(a[i]+a[i+1]);

	cout<<(char)(a[strlen(a)-1]+a0);
	return 0;
}
