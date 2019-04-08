int main()
{
	int a[100],*p,*q,b,n,m,i;
	scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	q= (int*)malloc(n*sizeof(int));
	for(i=n-m;i<n;i++)
		*(q+i+m-n)=*(p+i);
	for(i=0;i<n-m;i++)
		*(q+i+m)=*(p+i);
	for(i=0;i<n-1;i++)
		printf("%d ",*(q+i));
	printf("%d",*(q+n-1));
	free (q);
	return 0;
}
