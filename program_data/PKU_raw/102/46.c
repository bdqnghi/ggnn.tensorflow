
int main(){
	int n,i,m=0,f=0,len[40],x=0,y=0;
	char sum[40][7],me[40][7],fl[40][7];
	double sg[40],s[40],g[40];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sum[i]);
		scanf("%lf",&(sg[i]));
		len[i]=strlen(sum[i]);
		if(len[i]==4){
			strcpy(me[x],sum[i]);
            s[x]=sg[i];
            m++;
			x++;
		}
		else{
			strcpy(fl[y],sum[i]);
			g[y]=sg[i];
			f++;
			y++;
		}
	}
	int k;
	double e;
	for(k=1;k<=x;k++){
		for(i=0;i<x-k;i++){
			if(s[i]>s[i+1]){
				e=s[i];
				s[i]=s[i+1];
				s[i+1]=e;
			}
		}
	}
    for(k=1;k<=y;k++){
		for(i=0;i<y-k;i++){
			if(g[i]<g[i+1]){
				e=g[i];
				g[i]=g[i+1];
				g[i+1]=e;
			}
		}
	}
	printf("%.2lf",s[0]);
	for(i=1;i<x;i++){
		printf(" %.2lf",s[i]);
	}
	for(i=0;i<y;i++){
		printf(" %.2lf",g[i]);
	}
	return 0;
}
