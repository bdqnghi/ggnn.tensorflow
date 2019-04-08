int main()
{
	int a,b,i,k,n,m;
	scanf("%d",&n);
	k=0;
	m=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(b-a==1)
			k=k+1;
		if(a-b==2)
			k=k+1;
		if(a-b==1)
			m=m+1;
		if(b-a==2)
			m=m+1;
	}
	if(k>m)
		printf("A");
	if(k<m)
		printf("B");
	if(k==m)
		printf("Tie");
	return 0;
}