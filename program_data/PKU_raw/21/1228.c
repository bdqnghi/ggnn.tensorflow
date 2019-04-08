int main()
{
    int n,c,i=0,a[300],m[300];
    double ave,sum=0,d[300];
	double max=0;
	cin>>n;
    for(i=0;i<n;i++)
    {
		cin>>a[i];
		sum=sum+a[i];
    }
    ave=sum/n;
    i=0;
    for(i=0;i<n;i++)
		d[i]=abs(a[i]-ave);
	i=0;
	for(i=0;i<n;i++)
		if(d[i]>max)
			max=d[i];
	i=0;
	int t=0,h;
	for(i=0;i<n;i++)
		if(d[i]==max)
			{
				m[t]=a[i];
				t++;
			}
	h=t-1;
	t=0;
	if(h==0)
		cout<<m[0]<<endl;
	else
	{	
		for(t=0;t<h;t++)
			if(m[t]>m[t+1])
			{
				c=m[t];
				m[t]=m[t+1];
				m[t+1]=c;
			}
	t=0;
	for(t=0;t<h;t++)
		cout<<m[t]<<",";
	cout<<m[h]<<endl;}
    return 0;
}
