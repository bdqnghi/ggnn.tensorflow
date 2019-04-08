void main()
{
	int k,m,n,*sum,i,j,*q;
	sum=(int*)malloc(100*sizeof(int));
	q=sum;
	scanf("%d",&k);
	for(j=0;j<k;j++,sum++)
	{
	    *sum=0;
		int *p,*p1;
		p=(int*)calloc(1000,100*sizeof(int));
		scanf("%d %d",&m,&n);
		p1=p;
		for(i=0;i<m*n;i++)
			scanf("%d",p++);
		for(i=0,p=p1;i<m*n;i++,p++)
			if(i<n||i%n==0||(i+1)%n==0||(i<n*m&&i>(n*(m-1)-1)))
                *sum=*sum+*p;
	}
	for(i=0,sum=q;i<k-1;i++)
	    printf("%d\n",*sum++);
	printf("%d",*sum);
}