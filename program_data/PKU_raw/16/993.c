int main()
{
	int j=0,k,n,a[10],i=0;
	cin>>n;
	k=n;
	while(k>0)
	{
		a[i]=k%10;    //???????
		k=k/10;
		i++;
		j++;          //????
	}
	if(n==0)
	{
		a[0]=0;
		j=1;
	}
	for(i=0;i<j;i++)
		cout<<a[i];   //????????
	cout<<endl;
	return 0;
}