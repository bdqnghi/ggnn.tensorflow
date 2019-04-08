void main()
{
	int n,i,j,t=0;
    scanf("%d",&n);
    for(i=1;i<=3;i++)
	{
		j=2*i+1;
		if(n%j==0) 
		{
			if(t>0) 
				printf(" ");
			printf("%d",j);
			t++;			
		}
	}
	if(t==0)
	printf("n");
	printf("\n");
}
