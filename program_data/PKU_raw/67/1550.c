
int main()
{
	int n,i;
	double a[100],b[100],standard,c[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>b[i]>>a[i];
	standard=a[0]/b[0];
	for(i=1;i<n;i++)
		c[i]=a[i]/b[i];
	for(i=1;i<n;i++)
	{
		if(standard-c[i]>0.05)
			cout<<"worse"<<endl;
		if(standard-c[i]<-0.05)
			cout<<"better"<<endl;
		if(standard-c[i]>-0.05&&standard-c[i]<0.05)
			cout<<"same"<<endl;
	}
	return 0;
}


