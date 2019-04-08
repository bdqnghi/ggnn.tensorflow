int main()
{
	char a[200];
	int times[100]={0};//?????????????
	int start[100]={0};//?????????????
	int sum=0;
	int i;
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==a[i+1])
		{
			times[sum]++;
		}
		else
		{
			times[sum]++;
			sum++;
			start[sum]=i+1;
		}
	}
	for(i=0;i<sum;i++)
		cout<<'('<<a[start[i]]<<','<<times[i]<<')';
	return 0;
}