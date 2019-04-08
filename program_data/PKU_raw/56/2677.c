void main()
{
	long int n;
	long int a[5],i,j,k,b[6];
	b[0]=1,b[1]=10,b[2]=100,b[3]=1000,b[4]=10000,b[5]=100000;
	scanf("%ld",&n);
	for(i=4;i>=0;i--)
	{
		a[i]=n%b[i+1];
		a[i]=a[i]/b[i];
		if((n/b[i])==0)
			a[i]=10;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<10)
		{
			printf("%ld",a[i]);
		}
	}
}


