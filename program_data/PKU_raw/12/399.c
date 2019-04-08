int main(){
	int a[1000],i,j,n,k;
    while(1)
    {
	n=0;
	cin>>a[1];
	if (a[1]!=-1)
	{
	for(i=2;a[i-1]!=0;i++)
		cin>>a[i];
	for(j=1;j<i-1;j++)
		for(k=1;k<i-1;k++)
			if(a[k]==2*a[j])
				n=n+1;
	cout<<n<<endl;
	}
	else break;
	}
	return 0;}
