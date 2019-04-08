main()
{
	for (int j=0;;j++){
	int m,n;
	scanf("%d%d",&n,&m);
	if(m==0) break;else{	
	int k=0;
	for (int i=2;i<=n;i++)
		k=((m%i)+k)%i;
	printf("%d\n",k+1);
	}
}
}
 