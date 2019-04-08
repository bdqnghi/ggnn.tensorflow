int main()
{

	int a,b;
	float m1=2,n1=1,m2=3,n2=2,temp1,temp2;
	float sum=0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		for(int j=1;j<=b;j++)
		{
		sum+=(m1/n1);
		temp1=m1;
		temp2=n1;
		m1=m2;
		n1=n2;
		m2+=temp1;
		n2+=temp2;
		}
		printf("%.3f\n",sum);
		m1=2;
		n1=1;
		m2=3;
		n2=2;
		sum=0;

		
	}


	return 0;
}
