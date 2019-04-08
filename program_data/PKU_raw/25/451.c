int i,k,num[50]={0},temp[50]={0};
int mul()
{
	int m;
	for(m=0;m<50;m++)
	{
		temp[m]=temp[m]+num[m]*2;
		if(temp[m]>=10)
		{
			temp[m+1]++;
			temp[m]=temp[m]%10;
		}
	}
	for(m=0;m<50;m++)
		num[m]=temp[m];
	for(m=0;m<50;m++)
		temp[m]=0;
	return 0;
}
int main()
{
	cin>>k;
	num[0]=2;
	if(k!=0)
	{for(i=0;i<k-1;i++)
		mul();
	for(i=1;num[50-i]==0;i++);
	for(;i<=50;i++)
		cout<<num[50-i];}
	else
		cout<<1;

	return 0;
}