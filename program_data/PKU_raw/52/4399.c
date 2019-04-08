int main()
{
	int i,j,k,l,m,n,d[100];
	int *p1,*p2;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++) scanf("%d",&d[i]);
	p2=&d[m+n-1];p1=&d[m-1];
	for(;p1>=&d[0];p1--,p2--) *p2=*p1;
	p2=&d[0];p1=&d[m];
	for(;p2<&d[n];p2++,p1++) *p2=*p1;
	for(i=0;i<m;i++) printf("%d%c",d[i],(i==m-1)? '\n':' ');
	return 0;
}

