

int main()
{
	
	int n,a[10];

	int i;
while(cin>>n)
{
if(n==0)
{
 cout<<0;
}
for(i=1;i<=5 && n!=0;i++)
{
	a[i]=n%10;
	n=n/10;
	cout<<a[i];
}
cout<<endl;
}
      


	return 0;
}


