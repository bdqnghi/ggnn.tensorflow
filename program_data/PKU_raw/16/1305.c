int main()
{
	int a=0,n=0,i=0,j=n-1;
	cin>>a;
	if(a==0)
		cout<<"0";
	else if(a!=0)
	{
	while(a>=pow(10,n))
		n=n+1;
	int c[10]={0};
	for(i=0;i<=n-1;i++)
       c[i]=a%(int)(pow(10,i+1));
	for(i=0;i<=n-1;i++)
	    c[i]=c[i]/pow(10,i);
    for(i=0;i<=n-1;i++)
	   cout<<c[i];
	}
	return 0;
}
    