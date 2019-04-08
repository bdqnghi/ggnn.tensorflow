int main()
{
	int a[301],*p,n,i,j,k=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=a;
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{for(j=0;j<i;j++)
		if((*(p+i)-*(p+j))!=0) k+=1;
		if(k==i) 
			printf(",%d",*(p+i));
	k=0;}
	return 0;
}
