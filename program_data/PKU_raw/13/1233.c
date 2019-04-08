int  main()
{
	int n,i,j,m=0;
	int a[20000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		int t=0;
		for(j=0;j<i;j++)
			if(a[i]==a[j]) {
			t++; break;
			}

	if(t==0){
		if(m>0) cout<<" ";
		cout<<a[i];
	m++;
	}
	}
	return 0;
}
