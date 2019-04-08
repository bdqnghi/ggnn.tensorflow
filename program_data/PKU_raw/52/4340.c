void main()
{
	int a[100],n,m,i;
	int* p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		if(i>=n-m){p=a;scanf("%d",p+i-n+m);}
		else {p=a+m;scanf("%d",p+i);}
	}
	for(i=0;i<n;i++)printf("%d%c",*(a+i),i==n-1?'\n':' ');
}