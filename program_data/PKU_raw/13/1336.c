int main()
{
	int n,i,j,l;
    int *m;
    scanf("%d",&n);
	m=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
	{
		scanf("%d",m+i);
	}
	printf("%d",*m);
	for(i=1;i<n;i++)
	{
		l=0;
		for(j=0;j<i;j++)
		{  
		   if(*(m+i)==*(m+j))
		   {
			   l=1;
			   break;
		   }
		}
        if(l==0)
		   {
              printf(" %d",*(m+i));
		   }
	}
	free(m);
	return 0;
}