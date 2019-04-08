void main()
{
	int i,n;scanf("%d",&n);
	int *p=(int *)calloc(1,100*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i--;i>=0;i--)
	{
		if(i==0) printf("%d",*(p+i));
		else printf("%d ",*(p+i));
	}
}