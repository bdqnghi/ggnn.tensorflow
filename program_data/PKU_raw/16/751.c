//********************
//??????
int main()
{
	int n,i=0,a[6];
	cin>>n;
	if(n==0)
		cout<<n;
	else 
		while(n>0)
	{
	     a[i]=n%10;
		 n=(n-a[i])/10;
		 cout<<a[i];
		 i++;
	}
	 return 0;

}