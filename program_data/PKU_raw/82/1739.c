int main()
{
	int n,a[1000],b[1000],i,p,c[1000],t;
	p=0;t=0;c[0]=0;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++){
		scanf("%d%d\n",&a[i],&b[i]);}
	scanf("%d%d",&a[n-1],&b[n-1]);
	for(i=0;i<n;i++){
        if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
			p=p+1;
		else {c[t]=p;p=0;t++;}}
	
	for(i=0;i<=t;i++){
		if(c[i]>p)p=c[i];}
	printf("%d\n",p);}
