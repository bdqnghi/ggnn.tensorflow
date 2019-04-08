int main()
{
	char a[1000][100]={'\0'};
	int n,i1;
	cin>>n;
	for (i1=0;i1<n;i1++)
		cin>>*(a+i1);
	int num=0;
	for (int i2=0;i2<=i1-1;i2++)
	{
		if (num+strlen(*(a+i2))<=80&&num+strlen(*(a+i2))+1+strlen(*(a+i2+1))<=80&&i2!=i1-1)
		{
			cout<<*(a+i2)<<" ";
			num=num+strlen(*(a+i2))+1;
		}
		else if (num+strlen(*(a+i2))<=80&&num+strlen(*(a+i2))+1+strlen(*(a+i2+1))>80)
		{
			cout<<*(a+i2)<<endl;
			num=0;
		}
		else if(num+strlen(*(a+i2))<=80&&num+strlen(*(a+i2))+1+strlen(*(a+i2+1))<=80&&i2==i1-1)
			cout<<*(a+i2);
	}
}