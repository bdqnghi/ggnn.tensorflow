void main()
{
	int n,m,i;
	int x[100];
	int *p,*head;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	head=&x[0];
	p=&x[n-m];
	for(i=0;i<m;i++,p++)
		printf("%d ",*p);
	for(i=0;i<n-m-1;i++,head++)
		printf("%d ",*head);
	printf("%d\n",*(head++));
}