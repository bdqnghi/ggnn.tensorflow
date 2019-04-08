int main()
{
	int n,a[300]={0},i,j,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	double max=abs(a[0]*n-sum);
	for(i=1;i<n;i++)
		if(abs(a[i]*n-sum)>max)
			max=abs(a[i]*n-sum);               //????????????
	int save[300]={0};
	int count=0;
	double e=0.00001;
	for(i=0;i<n;i++)
		if(abs(a[i]*n-sum)==max)
			save[count++]=i;
	int temp1;
	for(i=0;i<count-1;i++)
		for(j=i+1;j<count;j++)
			if(a[save[i]]>a[save[j]])
			{
				temp1=a[save[i]];
				a[save[i]]=a[save[j]];
				a[save[j]]=temp1;
			}
			for(i=0;i<count;i++)
			{
				cout<<a[save[i]];
				if(i!=count-1)cout<<',';
			}
	return 0;
}