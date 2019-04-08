int main()
{
	int num[50]={0};
	int n,k,i,j,flag=0;
	cin>>n;
	num[1]=2;
	for(k=0;k<n-1;k++)
	{
		i=49;
		while(num[i]==0)
			i--;

		for(j=1;j<=i+1;j++)
		{
			num[j]*=2;
			if(num[j-1]>=10)
			{
				num[j-1]-=10;
				num[j]+=1;
			}
			
		}
	}
	
	if(n==0)
		cout<<1<<endl;
	else

	{i=49;
	while(num[i]== 0) 
		i--; //???????0??
	for (; i > 0; i--)
		cout << num[i]; //??????
	cout << endl;
	}
	return 0;
}