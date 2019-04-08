/**
 *???5.cpp
 *????7???????
 *??????
 *???2010?10?29?
 */
int main()
{
	int n,i,c=0;
	int sum=0;
	cin>>n;
    int a[100],b[100];
	for(i=0;i<n;i++)
	{
		c++;
        a[i]=c%10;
		b[i]=c/10;
		if(c%7!=0 && a[i]!=7 && b[i]!=7)
			sum=sum+c*c;
	}
	cout<<sum<<endl;
return 0;
}