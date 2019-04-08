int main()

{   int r[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int i,j=0,k,l,m,n,s,t,a[12][2],b[12],w;
	for(i=0;i<12;i++)
	{b[i]=0;}
	cin>>w;
	for(i=0;i<12;i++)
		{a[i][0]=0;
	a[i][1]=i+1;}
    

	for(i=1;i<12;i++)
	{a[i][0]=a[i-1][0]+r[i];
	}
	for(i=0;i<12;i++)
	{
		if(a[i][0]%7==7-w)
			b[j]=a[i][1],j++;
	}
	if(b[0]!=0)
		cout<<b[0];
	for(i=1;b[i]!=0;i++)
		cout<<endl<<b[i];
}

