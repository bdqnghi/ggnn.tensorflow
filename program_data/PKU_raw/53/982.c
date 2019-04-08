int main()
{
	int n;
	scanf("%d",&n);
	int a[300],b[300],*p,*q,i,j,k=1;
	p=a;
	q=b;
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	*q=*p;
	for(i=1;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(*(p+i)==*(q+j)) break;
		}
		if(j==k) 
		{
			*(q+j)=*(p+i);
			k=k+1;
		}
	}
	for(i=0;i<k-1;i++)
		printf("%d,",*(q+i));
	printf("%d",*(q+k-1));
return 0;
}
