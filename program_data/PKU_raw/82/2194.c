int main(){
	int n,i,sz[100],ss[100],cx[100],k,s,e,p=0;
	scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d %d",&sz[i],&ss[i]);
	for(i=0;i<n;i++) if(sz[i]>=90&&sz[i]<=140&&ss[i]>=60&&ss[i]<=90) {
		p=1;
		break;
	}

	for(i=0;i<n;i++) cx[i]=1;
	for(i=0;i<n;i++) if((sz[i-1]<=90||sz[i-1]>=140||ss[i-1]<=60||ss[i-1]>=90)&&sz[i]>=90&&sz[i]<=140&&ss[i]>=60&&ss[i]<=90&&sz[i+1]>=90&&sz[i+1]<=140&&ss[i+1]>=60&&ss[i+1]<=90) {
		s=i;
		for(e=s+1;sz[e]>=90&&sz[e]<=140&&ss[e]>=60&&ss[e]<=90;e++) cx[i]++;
	}
	for(k=1;k<=n;k++) for(i=0;i<n-k;i++) if(cx[i]>cx[i+1]) {
		e=cx[i+1];
		cx[i+1]=cx[i];
		cx[i]=e;
	}
    if(p==1) printf("%d",cx[n-1]);
	else printf("0");
	return 0;
}