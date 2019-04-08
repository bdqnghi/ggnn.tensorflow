int main(){
	int n,k,t,i,q,s[100],cm[100],atl[100],a[100],b,m;
	char name[100][20],e[100][2],f[100][2],final[20];
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%s %d %d %s %s %d",&name[k],&s[k],&cm[k],&e[k],&f[k],&atl[k]);
	}
	b=0;
	for(t=0;t<n;t++){
		a[t]=0;
		if(s[t]>80&&atl[t]>=1){
			a[t]=a[t]+8000;
		}
		if(s[t]>85&&cm[t]>80){
			a[t]=a[t]+4000;
		}
		if(s[t]>90){
			a[t]=a[t]+2000;
		}
		if(s[t]>85&&strcmp(f[t],"Y")==0){
			a[t]=a[t]+1000;
		}
		if(cm[t]>80&&strcmp(e[t],"Y")==0){
			a[t]=a[t]+850;
		}
	}
	b=0;
	for(q=0;q<n;q++){
		b=b+a[q];
	}
	m=0;
	for(i=0;i<n;i++){
		if(a[i]>m){
			m=a[i];
			strcpy(final,name[i]);
		}
	}
	printf("%s\n%d\n%d",final,m,b);
	return 0;
}