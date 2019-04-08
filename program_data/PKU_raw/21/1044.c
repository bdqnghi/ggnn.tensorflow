int main()
{
	int i,j=0,n,a[300]={0},t,num=0,re[300];
	double ave=0,max=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		ave+=a[i];
	}
	ave/=n;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(i=0;i<n;i++)
		if(max<fabs((double)a[i]-ave))
			max=fabs((double)a[i]-ave);
	for(i=0;i<n;i++)
		if(fabs(max-fabs((double)a[i]-ave))<1E-5)
		{
			re[num]=a[i];
			num++;
		}
	if(num==1)
		cout<<re[0]<<endl;
	else
	{
		cout<<re[0];
		for(i=1;i<num;i++)
			cout<<","<<re[i];
		cout<<endl;
	}
	return 0;
}
