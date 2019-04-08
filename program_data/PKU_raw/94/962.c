int main()
{
	int n,i;//????
	cin>>n;
	int a[501],b[501],count=1;//??a???????b????,??????
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]%2==1)
			b[count++]=a[i];
	}//?????????????count-1
	int j,k,p;//maopaopaixu
	for (j=1;j<=count-1-1;j++)
	{
		for (k=1;k<=count-1-j;k++)
		{
			if (b[k]>=b[k+1])
			{
				p=b[k];
				b[k]=b[k+1];
				b[k+1]=p;
			}
		}
	}//??????????
	int l;
	for (l=1;l<=count-2;l++)
		cout<<b[l]<<",";
	cout<<b[count-1];
	return 0;
}