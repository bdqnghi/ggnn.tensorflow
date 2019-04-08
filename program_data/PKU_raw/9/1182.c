int main(){
	char s[100][MAX+1];
	char g[100][MAX+1];
	int h[100];
	int k[100],a,i,j;
	char q[100];
	int n,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
		scanf("%d",&k[i]);
	}
	a=0;
	j=0;
	for(i=0;i<n;i++){
		if(k[i]>=60){
		a++;
		h[j]=k[i];
		strcpy(g[j],s[i]);
		j++;
		k[i]=0;
	}
	}
	for(i=1;i<=a;i++){
		for(j=0;j<a-i;j++){
			if(h[j]<h[j+1]){
				e=h[j];
				h[j]=h[j+1];
				h[j+1]=e;
				strcpy(q,g[j]);
				strcpy(g[j],g[j+1]);
				strcpy(g[j+1],q);
			}
		}
	}
	for(i=0;i<a;i++){
		printf("%s\n",g[i]);
	}
	for(i=0;i<n;i++){
		if(k[i]!=0)
			printf("%s\n",s[i]);
	}
	return 0;
}