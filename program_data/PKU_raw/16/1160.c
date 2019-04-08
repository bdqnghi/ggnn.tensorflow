
int main()
{
	int b=0,n,c,i,a[5];
	cin>>n;
	if(n==0) {cout<<'0'<<endl;}
	else
	{
	for(i=0;n>0;i++)
		{c=n%10;
		a[i]=c;
		n=n/10;
		b+=1;}//???n?10????????,??n?10???????n
    for(i=0;i<b;i++)
	   cout<<a[i];
	cout<<endl;
	}
	return 0;
}
