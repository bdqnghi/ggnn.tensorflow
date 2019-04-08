int main()
{
	int n;
	int q[100]={0};
	cin>>n;
	int i=0,j=0,a,b,max=0;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(a>=90&&a<=140&&b>=60&&b<=90)
			q[j]++;
		else
			j++;
	}
	for(i=0;i<100;i++)
	{
		if(q[i]>max)
			max=q[i];
	}
	cout<<max<<endl;
	return 0;
}