void main()
{
	int n,a,max,sec,i,x;
	scanf("%d",&n);
	scanf("%d",&x);
	max=x;
	sec=x;
	for (i=2;i<=n;i++){
		scanf("%d",&x);
		if (x>=max)
			max=x;
		if ((x<max)&&(x>=sec))
			sec=x;}
	printf("%d\n",max);
	printf("%d\n",sec);
}