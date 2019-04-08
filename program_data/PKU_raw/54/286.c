
main()
{   
	int j,m=1,n,k;
	float q=0.5;
	scanf("%d%d",&n,&k);
	while((int)q!=q||q<1)
	{
		m+=1;
		q=(m-k)/n;
		for(j=1;j<=n-1;j++)
		{	
			if((int)q!=q)
				break;
			else 
				q=((n-1)*q-k)/n;
		}
	}
	printf("%d\n",m);

}
	
			

