int main(){
    int max,min,n,i,j,x=0;
    scanf("%d",&n);
	int sx[50001],sy[50001],sz[50001]={0};
	for(i=0;i<n;i++){
	   scanf("%d %d",&(sx[i]),&(sy[i]));
	   }
	min=sx[0];
	max=sy[0];
	for(i=1;i<n;i++){
		if(min>sx[i]){
			min=sx[i];
		}
	}
	for(i=1;i<n;i++){
		if(max<sy[i]){
			max=sy[i];
		}
	}
	for(i=0;i<n;i++){
		for(j=sx[i];j<sy[i];j++){
			sz[j]=1;
		}
	}
	for(i=min;i<max;i++){
		if(sz[i]!=1){
			x++;
		}
	}
	if(x==0){
		printf("%d %d",min,max);
	}else{
		printf("no");
	}
	return 0;
	}
