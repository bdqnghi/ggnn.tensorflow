int main()
{
	int k,i,j,m,n,t;
	long s;
	scanf("%d",&n);
	i=0;
	j=0;
	m=0;
	t=0;
	do
	{ 
		scanf("%d",&k);
		t++;
		if(k==0&&m==0&&j==0) i++;
		if(j==1&&k==0) m++;
		if(k!=0&&i!=0) j=1;
	}while(t<(n*n));
	s=(i-2)*((m-(i-2))/2-1);
	printf("%ld",s);
         return 0;
}