int multiply(int a,int b)
{
	int i=0,n=0,sum=1;
	if(a<b)
		return 0;
	else
	{
		for(i=b;i<=a;i++) //????
		{
			if(a%i==0)
			{
				sum=sum+multiply(a/i,i); //????
			}
		}
		return sum;
	}
}
int main()
{
	int n=0,m=0,i=0,sum=0,num,result[1000];
	cin>>n;
	do    //?????
	{
		cin>>num;
		result[i]=multiply(num,2); //????
		i=i+1;
		m=m+1;
	}while(m<n);
	for(i=0;i<n;i++)//????
	{
		cout<<result[i]<<endl;
	}
	return 0;
}
