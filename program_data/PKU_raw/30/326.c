int judge(int x);
int main()
{
	int n,i,sum=0,squ=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(judge(i)==0)
		{
			squ=i*i;
			sum=sum+squ;
		}
	}
	cout<<sum<<endl;
	return 0;
}
int judge(int x)
{
	int seven=0;
	if(x%7==0)
		seven=1;
	if((x-7)%10==0)
		seven=1;
	if(x>=70 && x<80)
		seven=1;
	return seven;
}

			


