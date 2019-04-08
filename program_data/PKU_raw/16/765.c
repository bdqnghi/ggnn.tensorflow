//********************************
//* Name:????                *
//* Authur:sunzeyu               *
//* Editting time:2013.10.19     *
//* Function:????            *
//********************************
int main()
{
	int a[5],n,i,k=0;
	cin>>n;
	for(i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(i=4;i>=0;i--)
		if(a[i]!=0)
		{
			k=i;
		    break;
		}
	for(i=0;i<=k;i++)
		cout<<a[i];
	cout<<endl;
	return 0;
}