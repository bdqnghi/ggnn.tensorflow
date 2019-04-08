/*************************************
*file                           ******
*author                           ****
*date                              ***
*description                         *
*************************************/

int main()
{
	int n,sum=0;
	cin>>n;
	int i,j,k,l;
	for(i=1;i<=n;i++)
	{
		j=i/10;
		if(i%7==0||i%10==7||j%10==7) continue;
		sum+=i*i;
	}
	cout<<sum<<endl;
	return 0;
}