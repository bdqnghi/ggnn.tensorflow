void main()
{
	int k,m,n,*p[100],i,*w[100],j,r,s=0;
	scanf("%d\n",&k);
	for(j=0;j<k;j++) w[j]=(int*)malloc(2*sizeof(int));
	for(j=0;j<k;j++) 
	{
		scanf("%d %d\n",w[j],w[j]+1);
		m=*(w[j]);
		n=*(w[j]+1);
		for(r=0;r<m;r++)
		p[r]=(int*)malloc(100*sizeof(int));
		for(r=0;r<m;r++) 
			for(i=0;i<n;i++) scanf("%d",p[r]+i);
		for(r=0,i=0;i<n;i++) s=s+*(p[r]+i);
		for(r=m-1,i=0;i<n;i++) s=s+*(p[r]+i);
		for(i=0,r=1;r<m-1;r++) s=s+*(p[r]+i);
		for(i=n-1,r=1;r<m-1;r++) s=s+*(p[r]+i);
		printf("%d\n",s);
		s=0;
		free(p[0]);
	}
}

