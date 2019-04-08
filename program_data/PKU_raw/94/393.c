int main(){
	int n,i,m,k,c;
	m=0;
	int sz[LEN],p[LEN];
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&sz[i]);
	}
    m=0;
	for(i=0; i<n; i++){
		if(sz[i]%2!=0){
		p[m]=sz[i];
		m++;
		}
	}
	c=m;
    int maxIndex, e;
    for(k=1;k<=c; k++){
	maxIndex=0;
	for(m=0; m<=c-k; m++){
			if(p[m]> p[maxIndex]){
					maxIndex=m;
			}
	}	
	if(maxIndex != c-k){
		e = p[maxIndex];
		p[maxIndex] = p[c-k];
		p[c-k]=e;
	}
}

    for(m=0; m<c-1; m++){
		printf("%d,",p[m]);
	}
   printf("%d",p[m]);
    return 0;
}