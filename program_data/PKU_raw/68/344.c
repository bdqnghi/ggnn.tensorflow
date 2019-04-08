void main()
{
	int num,m,k,n=1,i,a[50001]={0},x,j;
	scanf("%d",&num);
	for(i=1;i<=n;i++)
		a[i]=i;

	a[1]=0;a[2]=1;a[3]=1;
	for(m=4;m<=num;m++)
	{
		k=sqrt(m);
		for(i=2;i<=k;i++)
		if(m%i==0)
			{a[m]=0;
				break;
			}

			if(i>=k+1)
			a[m]=1;
	}
	

	for(j=6;j<=num;j=j+2)
	{
		for(i=1;i<=j/2;i++)
			if(a[i]==1&&a[j-i]==1)
			{	printf("%d=%d+%d\n",j,i,j-i);
			    break;}
	}
}




	
