int main(){
	int n;
	cin>>n;
	int a[500],ji[500];
	int num=0;
	int i,j;
	int t;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
		if(a[i]%2==1)
		{
			ji[num]=a[i];
			num=num+1;
		}
	}
	for(i=num-1;i>=1;i--)
		for(j=0;j<=i-1;j++)
		{
			if(ji[j]>ji[j+1])
			{
				t=ji[j];
				ji[j]=ji[j+1];
				ji[j+1]=t;
			}
		}
	cout<<ji[0];
	for(i=1;i<=num-1;i++)
		cout<<","<<ji[i];
}