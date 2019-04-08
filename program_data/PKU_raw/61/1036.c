int f(int n)
{
	if(n==1)return 1;
	else if(n==2)return 1;
	else
	{
		 return f(n-1)+f(n-2);
	}
}

int main()
{
	int k=0;
	int a[k];
	cin>>k;
	for(int i=0;i<k;i++)
	 {
		 cin>>a[i];
	 }
	for(int i=0;i<k;i++)
	 {
            cout<<f(a[i])<<endl;

	 }

	return 0;
}