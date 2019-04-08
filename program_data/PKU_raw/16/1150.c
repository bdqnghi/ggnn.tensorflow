int main()
{
	int n,i;
	cin>>n;
	do{
		cout<<(n%10);
        n/=10;
	}while(n>0);
		return 0;
}
