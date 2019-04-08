int main()
{
	int m;
	float sum;
	int i,j;
	int k[100];
	int Fibonacci(int);
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&k[i]);
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<k[i];j++)
			sum=(float)Fibonacci(j+1)/Fibonacci(j)+sum;
		printf("%.3f\n",sum);
	}
	return 0;
}
int Fibonacci(int k)
{
	int a[2]={1,2};
	int j=0;
	int i=0;
	if(k==1) 
		return a[1];
	else if(k==0) 
		return a[0];
	else if(k>=2)
	{
		for(i=2;i<=k;i++)
		{
			a[j]=a[j]+a[1-j];
		    j=1-j;
	    }
		   return a[1-j];
	}
}