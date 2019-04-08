int main(){
    int n,m,i,t,k,e,f,max,g,max1;
    int hz[50000];
	int sz[50000];
	t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d %d",&hz[i],&sz[i]);
	}
	for(k=1;k<=n;k++){
	for(i=0;i<n-k;i++){
			if(hz[i]>hz[i+1]){
					e=hz[i+1];
					f=sz[i+1];
					hz[i+1]=hz[i];
					hz[i]=e;
					sz[i+1]=sz[i];
					sz[i]=f;
			}
	}
}
	for(i=0;i<n-1;i++){
		for(g=0;g<=i;g++){
			if(g==0){
			max=sz[g];
		}
		else if((sz[g]>max)){
        max=sz[g];
		}
		}
	if((hz[i+1]>max)){t=1;}
	}
	for(i=0;i<n;i++){
		if(i==0){
			max1=sz[i];
			}
		else if((sz[i]>max1)){
        max1=sz[i];
}
	}
	if(t==1){
		printf("no");}
	else{printf("%d %d",hz[0],max1);}
	return 0;
}