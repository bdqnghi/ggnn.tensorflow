int main()
{
	int a[1000][2],sum=0,min=100000000,max=0;
	char b;
	do{
		cin >>a[sum][0];
		if(a[sum][0]<min)
			min=a[sum][0];
		++sum;
		b=getchar();
	}while(b==',');
	for(int i=0;i<sum;i++)
	{
		cin >>a[i][1];
		if(a[i][1]>max)
			max=a[i][1];
		b=getchar();
	}
	cout <<sum <<" ";
	int m=0;
	for(int j=min;j<=max;j++)
	{
		int m1=0;
		for(int k=0;k<sum;k++)
			if(a[k][0]<=j&&a[k][1]>j)
				++m1;
		if(m1>m)
			m=m1;
	}
	cout << m <<endl;
	return 0;
}
