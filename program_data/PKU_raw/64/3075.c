int main()
{
	int n,i,j,a[80],b[80],k=0,m,code1,code2;
	double x[13],y[13],z[13],S[80],t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)//????Cn2
		{
			S[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));//???
			a[k]=i;b[k]=j;
			k++;//
		}
    for(i=0;i<k;i++)
		for(j=k-1;j>i;j--)//?????
			if(S[j]>S[j-1])
			{
				t=S[j];
				S[j]=S[j-1];
				S[j-1]=t;//????
				m=a[j];
				a[j]=a[j-1];
				a[j-1]=m;//???????
				m=b[j];
				b[j]=b[j-1];
				b[j-1]=m;//???????
			}
    for(i=0;i<k;i++)
	{
		code1=a[i];code2=b[i];
		cout<<"("<<(int)x[code1]<<","<<(int)y[code1]<<","<<(int)z[code1]<<")-("<<(int)x[code2]<<","<<(int)y[code2]<<","<<(int)z[code2]<<")=";
		cout<<fixed<<setprecision(2);
		cout<<S[i]<<endl;
	}
	return 0;
}