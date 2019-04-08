void main()
{
	int num[100],n,i,j,m=0,*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
    }
    p=num;
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
		  if(*(p+j)==*(p+i))
		  {
		  m=0;
		  break;
		  }
		  if(*(p+j)!=*(p+i))
			  m=1;
		}
		if(m==1) printf(",%d",*(p+i));
	}

}