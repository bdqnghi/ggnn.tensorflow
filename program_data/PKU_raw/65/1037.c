int main(){
	int c=0,d=0,i,n,a[200],b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
    for(i=0;i<n;i++){
		if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==2||a[i]==2&&b[i]==0) c++;
		else if(a[i]==b[i]){
			c=c;d=d;
		}else d++;
	}
	if(c>d) printf("A");
	else if(c<d) printf("B");
	else printf("Tie");
	return 0;
}