
int main()
{
	int n;
	int a[300];
	cin>>n;
	int i,j;
	float average=0;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
		average+=a[i];
	}
	average/=n;
	for(i=0;i<=n-2;i++)
		for(j=n-1;j>=i+1;j--)
		{
			if(a[j]<a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	float s=(average-a[0])-(a[n-1]-average);
	if(s>0)cout<<a[0];
	else if(s<0)cout<<a[n-1];
	else cout<<a[0]<<','<<a[n-1];
	return 0;
}