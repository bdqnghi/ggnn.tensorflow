void main()
{
	int i,m,n,sum,a[10001],*p;
	scanf("%d",&i);
	while(i--){
		scanf("%d%d",&m,&n);
		for(p=a;p<a+m*n;p++)
			scanf("%d",p);
		sum=0;
		for(p=a;p<a+n;p++)
			sum+=*p;
		if(m!=1)
			for(p=a+(m-1)*n;p<a+m*n;p++)
				sum+=*p;
		for(p=a+n;p<a+(m-1)*n;p+=n)
			sum+=*p;
		for(p=a+n*2-1;p<a+m*n-1;p+=n)
			sum+=*p;
		printf("%d\n",sum);
	}
}