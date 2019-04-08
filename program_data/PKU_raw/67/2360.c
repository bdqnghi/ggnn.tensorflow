int main()
{
	int n,i;
	cin>>n;
	double a[n],b[n];
	double y[n-1],x;
	for(i=0;i<=n-1;i++)
		cin>>a[i]>>b[i];
	x=b[0]/a[0];
	for (i=1;i<=n-1;i++)
		{y[i-1]=b[i]/a[i];}
	for (i=0;i<=n-2;i++)
	    {if((y[i]-x)>0.05) cout<<"better"<<endl;
	    else if ((x-y[i])>0.05) cout<<"worse"<<endl;
	    else cout<<"same"<<endl;}
	return 0;
}
