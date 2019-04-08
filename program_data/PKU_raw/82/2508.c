
int main()
{
	int a[100],b[100];
	int count[100];
	int i,j;
	int n;
	cin>>n;
	for (i=0;i<n;i++)
		count[i]=0;
	for (i=0;i<n;i++)
		cin>>a[i]>>b[i];
	for (i=0;i<n;i++)
	{
		if (a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{    count[i]=1;
			for (j=i+1;j<n;j++)
			{
				if (a[j]>=90&&a[j]<=140&&b[j]>=60&&b[j]<=90)
					count[i]++;
				else break;
			}
		}
	}
	int max=0;
	for (i=0;i<n;i++)
	{
		if (count[i]>max)
			max=count[i];
	}
	cout<<max<<endl;
	return 0;
}
