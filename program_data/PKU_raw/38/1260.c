
int main()
{
	int a[100]={0},k,i,j;
	double b[100]={0},cnt,average,s;
	cin>>k;
	for(i=0;i<k;i++)
	{
		average=0;
		cnt=0;
		s=0;
		cin>>a[i];
		for(j=0;j<a[i];j++)
		{
			cin>>b[j];
			average+=b[j];
		}
		average=average/a[i];
		for(j=0;j<a[i];j++)
			cnt+=(b[j]-average)*(b[j]-average);
		cnt=cnt/a[i];
		s=sqrt(cnt);
		cout<<fixed<<setprecision(5)<<s<<endl;
	}
	return 0;
}