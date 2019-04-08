void main()
{
	int i,j,k,t;
	int *p,*max;
	scanf("%d",&k);
	p=(int *)malloc(k*sizeof(int));
	max=(int *)malloc(k*sizeof(int));
	for (i=0;i<=k-1;i++) scanf("%d",p+i);

	for (i=0;i<=k-1;i++)
	{
		t=0;
		for (j=0;j<i;j++)
			if ( *(p+j) >= *(p+i) ) 
				if ( t < *(max+j) ) t=*(max+j);
		*(max+i)=t+1;
	}
	
	t=0;
	for (i=0;i<=k-1;i++) if (*(max+i)>t) t=*(max+i);
	printf("%d",t);

}