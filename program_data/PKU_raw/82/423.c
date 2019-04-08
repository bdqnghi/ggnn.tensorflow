int main(){
	int m,i;
	scanf ("%d",&m);
	int a[101],b[101],c[101];
	for (i=0;i<m;i++){
		scanf ("%d%d",&a[i],&b[i]);
		if (90<=a[i]&&140>=a[i]&&60<=b[i]&&90>=b[i]){
			c[i]=1;
		}
		else {
			c[i]=0;
		}
	}
	int q=0,p=0;
	for (i=0;i<m;i++){
		if (c[i]==1){
			p++;
		}
		if (p>q){
			q=p;
		}
		if (c[i]==0){
			p=0;
			continue ;
		}
	}
	printf ("%d",q);
	return 0;
}
