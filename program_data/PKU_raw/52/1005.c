void main()
{
	int i,j,n,m,num[100],temp,*p;
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++) 
		scanf("%d",&j),num[i]=j;
	for (i=n-1;i>n-m-1;i--) 
	{
		temp=*(num+n-1-i+n-m);
		for (j=n-2-i+n-m;j>=n-1-i;j--) 
			*(num+j+1)=*(num+j);
		*(num+n-1-i)=temp;
	}
	p=num;
	for (;p-num<=n-1;p++)
	{
	 printf("%d",*p);
	 if (p-num==n-1) printf("\n");
	 else printf(" ");
	 }
}
