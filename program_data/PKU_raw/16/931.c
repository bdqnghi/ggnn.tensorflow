int main()
{
	int n,i,j,k;
	int a[4];
	cin>>n;
	if(n==10000) cout<<"00001"<<endl;
	
	if(n/10==0) i=1;
	else if(n/100==0) i=2;
	else if(n/1000==0) i=3;
	else if(n/10000==0) i=4;
	
	for(j=i;j>=1;j--)
		{a[j-1]=n/(pow(10,(double)(j-1)));
	    n=n-pow(10,(double)(j-1))*a[j-1];}
    for(k=0;k<=i-1;k++)
	{cout<<a[k];}
	return 0;
}
