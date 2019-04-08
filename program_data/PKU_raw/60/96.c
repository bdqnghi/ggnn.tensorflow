main()
{
	int n,i,j,m,k,flag=0;
	scanf("%d",&n);
	for(i=3;i<n-1;i=i+2)
	{
		k=0;
		m=sqrt(i+2);
		for(j=3;j<=m;j+=2)
		{
			if(i%j==0) {k=1;
				        break;}
			if((i+2)%j==0) {k=1;
					        break;}
		}
			if(k==0) {printf("%d %d\n",i,i+2);flag=1;}
		
	}

	if(flag==0) printf("empty");
}
