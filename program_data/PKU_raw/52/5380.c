int main()
{
	int n,m,i,j,a[100];
	int * shu;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
    shu=a+n-m;
	i=0;
	do{
		cout<<*shu<<" ";
		shu++;
		i++;
		if(shu>a+n-1) shu=a;
		
	}while(i<n-1);
	cout<<*shu;
	return 0;
}