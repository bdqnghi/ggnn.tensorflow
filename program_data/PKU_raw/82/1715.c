int main()
{
	int n,a[300],b[300],c[300],t,x,m=0,i,j=0;
	scanf("%d",&n);
	if(n<=100){
		for(i=0;i<n;i=i+1)
		scanf("%d %d",&a[i],&b[i]);
		for(i=0;i<n;i=i+1){
			if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
				m=m+1;if(i==n-1)c[j]=m;
			}
			else {c[j]=m;m=0;j=j+1;}
		
		}
		x=c[0];
		for(t=0;t<j+1;t++){
			if(x<c[t]) x=c[t];
		}
		printf("%d\n",x);
	}
	return 0;
}