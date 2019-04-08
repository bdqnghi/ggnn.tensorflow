int a[1000];
main()
{
	int m,k,i,j,Flag=1;
	cin>>m>>k;
	for(i=0;i<m;i++)	cin>>a[i]; 
	for(i=0;i<m-1&&Flag;i++)
		for(j=i+1;j<m&&Flag;j++)
			if(a[i]+a[j]==k)
				{
					cout<<"yes";
					Flag=0;
					}
	if(Flag)	cout<<"no"; 
	} 