int main()
{
	int i,j,k,n=0;
	int x[1000]={0},y[1000]={0};
	int xmin,ymax;
	char c;
	int a[1000]={0};
	int max=1,man=0;

	for(i=0;i<1000;i++)
	{cin>>x[i];
	 cin.get(c);
	 n++;
	if(c=='\n')break;}

	for(i=0;i<1000;i++)
	{cin>>y[i];
	 cin.get(c);
	if(c=='\n')break;}

	xmin=x[0];ymax=y[0];
	for(i=0;x[i]!=0;i++)
	{
	 if(xmin>=x[i]){xmin=x[i];}
	 if(ymax<=y[i]){ymax=y[i];}
	}
	for(i=xmin;i<=ymax;i++)
	{
		for(j=0;j<n;j++)
		{
	      if((x[j]<=i&&i<y[j])||(x[j]==i))
		  {a[i]++;}
		}
	}
	for(i=0;i<n;i++)
	{man++;}

	for(i=xmin;i<=ymax;i++)
	{
		if(max<=a[i])max=a[i];
	}
	cout<<man<<" "<<max<<endl;
return 0;
}