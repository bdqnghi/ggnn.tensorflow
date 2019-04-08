void main()
{
	int a[300];
	int n,i,*p,j,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    p=a;
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(*(p+j)==*(p+i))
					*(p+j)=-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=-1)
		{
			printf("%d",*(p+i));
			
			break;
		}
	}
	x=i;
	for(i=x+1;i<n;i++)
	{
		if(*(p+i)!=-1)
			printf(",%d",*(p+i));
	}
}