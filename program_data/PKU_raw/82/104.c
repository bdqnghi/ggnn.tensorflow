int main(){
	int n,i,a,b,sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
        if(a>=90&&a<=140&&b<=90&&b>=60){
			sz[i]=1;
		}else{
			sz[i]=0;
		}
	}
	int k,c,d=0,m=0;
	for(k=m;k<n;k++){
		c=0;
		if(sz[k]==1){
			for(i=k;i<n;i++){
                if(sz[i]==1){
					c++;
				}else{
					m=i;
					break;
				}
			}
		}
		if(c>d){
			d=c;
		}
	}
	printf("%d",d);
	return 0;
}