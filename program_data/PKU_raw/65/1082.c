int main(){
	int n,c=0,d=0,i,m;
	scanf("%d",&n);
	m=n;
	int a[200],b[200];
	double e;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==1)
			c++;
		else if(a[i]==1&&b[i]==2)
			c++;
		else if(a[i]==2&&b[i]==0)
			c++;
		else if(a[i]==b[i])
			m--;
	}
	e=(double)m;
	e=e/2;
	if(c<e)
		printf("B");
	else if(c>e)
		printf("A");
	else if(c==e)
		printf("Tie");
	return 0;
}