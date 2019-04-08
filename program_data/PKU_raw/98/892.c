int main ()
{
	int n,i,sum=0,k=1;
	cin>>n;
	char a[1000][40];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(k==1)
			sum=sum+strlen(a[i]);
		else 
			sum=sum+strlen(a[i])+1;
		if(sum<=80 && k!=1)
			cout<<" "<<a[i];
		else if(sum<=80 && k==1)
		{
			k=0;
			cout<<a[i];
		}
		if(sum>80)
		{
			cout<<endl;
			cout<<a[i];
			sum=strlen(a[i]);
		}
		else if(sum==80)
		{	
			cout<<endl;
			sum=0;
			k=1;
		}
	}
	return 0;
}
