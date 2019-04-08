void main()
{
	long int abc(double n,float k);
	long int a,b;
	scanf("%ld%d",&a,&b);
	
	printf("%ld\n",abc(a,b));
}
long int abc(double n,float k)
{
	double sum=0;int i,j;
	for(i=1;;i++)
	{
		sum=i*(n-1);
		for(j=0;j<n;j++)
		{
			sum=n/(n-1)*sum+k;
			if((sum-(long int)sum)!=0)
		break;
		}
		if((sum-(long int)sum)==0)
		break;
	}
	return((long int)sum);
	
	     
}


