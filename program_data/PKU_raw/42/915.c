int main()
{
	int k,i,x;
	int a[999999];
	cin >>k;
	for(i=1;i<=k;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(i=1;i<=k;i++)
	{
		if(a[i]!=x)
		{
			cout<<a[i];
		    goto loop;	
		}
	}
loop: i++;	
for(  ;i<=k;i++)
	{
		if(a[i]!=x)
			cout<<" "<<a[i];
	}
	return 0;

}