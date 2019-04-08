int main(){
	int n,i,k,m,c,h;
	double e;
	int p[50001],q[50001],s[5001],t[50001];
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&p[i],&q[i]);
		s[i]=p[i];
		t[i]=q[i];
	}
	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(p[i]>p[i+1]){
               m=p[i];
			   p[i]=p[i+1];
			   p[i+1]=m;
			}
			if(q[i]<q[i+1]){
                c=q[i];
				q[i]=q[i+1];
				q[i+1]=c;
			}
		}
	}
    for(e=1.0*p[0];e<=1.0*q[0];e=e+0.5){
		h=0;
		for(k=0;k<n;k++){
			if(e>=1.0*s[k]&&e<=1.0*t[k])
				break;
            else
                h++;
		}
		if(h==n){
			printf("no");
			return 0;
		}
	}
	printf("%d %d",p[0],q[0]);

	return 0;
}