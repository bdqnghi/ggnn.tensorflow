void main()
{
	int a[100],n,x,y,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	x=a[0];
	y=a[0];
	for(i=1;i<n;i++)
		if(x<a[i])x=a[i];
	for(i=1;i<n;i++)
		if(y<a[i]&&a[i]!=x)y=a[i];
		printf("%d\n",x);
		printf("%d\n",y);





}
