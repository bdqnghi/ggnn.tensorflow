void main()
{
	int n,a[100],*p,i,j,d;
	scanf("%d\n",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	p=a;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{if(*(p+i)==*(p+j)) *(p+j)=0;}
	}
    for(i=0;i<n;i++)
		if(*(p+i)!=0) 
		{
			printf("%d",*(p+i));
			d=i;break;
		}
	for(i=d+1;i<n;i++)
		if(*(p+i)!=0) printf(",%d",*(p+i));

}


