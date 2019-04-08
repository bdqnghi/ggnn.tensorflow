void main()
{
	int sushu(int a);
	int n,i,m,j,k;
	scanf("%d",&n);
	for (k=6;k<=n;k++,k++)
	{   for (j=3;j<=k/2;j++,j++)
	{       if (sushu(j)==1)
			   m=k-j;
	        if (sushu(m)==1)
			{	printf("%d=%d+%d\n",k,j,m);
			break;}
	}
	}
}
    int sushu(int a)
	{   int i;
	    for (i=3;i<=sqrt(a);i++,i++)
			if (a%i==0)
				break;
		if (i>sqrt(a))
			return (1);
		else
			return(0);
	}




