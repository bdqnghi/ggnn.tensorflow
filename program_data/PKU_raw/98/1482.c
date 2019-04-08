void main()
{
	char a[500][41];
	int n,i,k,b[500];
	int *p1;
	char (*p2)[41];
	scanf("%d",&n);
	for(i=0,p2=a,p1=b;i<n;i++,p1++,p2++)
	{
		scanf("%s",*p2);
		b[i]=strlen(*p2);
	}
	p2=a;p1=b;
	for(i=0,k=*p1+1;i<n-1;i++,p2++,p1++)
	{
		k=k+*(p1+1);
		printf("%s",*p2);
		if(k>80)
		{
			printf("\n");
			k=*(p1+1)+1;
		}
		else 
		{
			printf(" ");
			k=k+1;
		}
	}
	p2=a;
	printf("%s",*(p2+n-1));
}