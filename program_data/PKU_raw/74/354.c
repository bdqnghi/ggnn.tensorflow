void main()
{
	int m,n,t,s,p,q,i,j,k=0,r,a[100];
	scanf("%d %d",&m,&n);
	for(i=(m%2==0?m+1:m);i<=n;i+=2)
	{
		t=i;
		s=0;
		for(j=0;t!=0;j++)
		{
			p=t%10;
			t=t/10;
			s=s*10+p;
		}
		if(s==i) 
		{
			r=1;
			q=sqrt(i);
			for(j=2;j<=q;j++) if(i%j==0) {r=0;break;}
			if(r==1) {a[k]=i;k++;}
		}
	}
	if(k!=0)
	{
		for(i=0;i<k-1;i++) printf("%d,",a[i]);
		printf("%d\n",a[k-1]);
	}
	if(k==0) printf("no\n");

}