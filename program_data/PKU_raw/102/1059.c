int main(){
	int n,i,j,k=0,m=0,t;
	double a[41],b[41],h[41],x,y;
	char s[41];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("\n%s %lf",s,&h[i]);
//printf("%lf",a[i]);
		if(strcmp(s,"male")==0){
			a[k+1]=h[i];
			k=k+1;
		}
	if(strcmp(s,"female")==0){
			b[m+1]=h[i];
			m=m+1;
		}
	}
	for(j=1;j<=k;j++) {
		for(t=1;t<=k-j;t++){
			if(a[t]>a[t+1]){
				x=a[t+1];
				a[t+1]=a[t];
				a[t]=x;
			}
		}
	}
for(j=1;j<=m;j++){
		for(t=1;t<=m-j;t++){
			if(b[t]<b[t+1]){
				y=b[t+1];
				b[t+1]=b[t];
				b[t]=y;
			}
		}
	}
for(i=1;i<=k;i++){
printf("%.2lf ",a[i]);

}
for(i=1;i<m;i++)
printf("%.2lf ",b[i]);
printf("%.2lf",b[m]);

return 0;
}