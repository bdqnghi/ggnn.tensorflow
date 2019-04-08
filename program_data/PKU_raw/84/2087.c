int main()
{
	int n,i,a,b,c,m1,m2;
	scanf ("%d",&n);
	scanf ("%d%d",&a,&b);
		if (a>b){
			m1=a;
			m2=b;
		}
		else{
			m1=b;
			m2=a;
		}
	for (i=1;i<n-1;i++){
		
		scanf ("%d",&c);
		if (c>m1){
			m2=m1;
			m1=c;
		}
		if (m2<c&&c<m1){
			m2=c;
		}
		if (m2>c){
			continue;
		}
	}
	printf ("%d\n%d",m1,m2);

	return 0;
}

