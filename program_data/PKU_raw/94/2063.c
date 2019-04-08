int main()
{
	int n,a[510],b[510],m=0,t=0,num=0;
	cin>>n;
	for(int i=0;i<n;i++)
			{cin>>a[i];
			b[i]=0;
			}
for(int ii=0;ii<n;ii++)
	{if(a[ii]%2==1)
		{b[m]=a[ii];
	num++;}
	if(a[ii]%2==0)
	b[ii]=100000000;
m++;}
for(int ii=0;ii<n-1;ii++)
		for(int j=0;j<n-1-ii;j++)
			if(b[j+1]<b[j])
				{t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
				}
cout<<b[0];
for(int ai=1;ai<num;ai++)
{
	cout<<","<<b[ai];
}
	return 0;
}