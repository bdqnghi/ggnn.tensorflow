int main(){
	int n,i,k,z,y;
	int x[50001],d[50001],j[50001];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d%d",&x[i],&d[i]);
	}
	y=0;
	z=0;
	for(i=0;i<=n-1;i++){
		if(x[i]<x[y]){
			y=i;
		}
		if(d[i]>d[z]){
			z=i;
		}
	}
	for(i=0;i<=n-1;i++){
		for(k=x[i]+1;k<=d[i];k++){
			j[k]=1;
		}
	}
	for(k=1,i=x[y]+1;i<=d[z];i++){
		if(j[i]==1){
			k++;
		}else{
			printf("no");
			break;
		}
	}
	if(k==d[z]-x[y]+1){
		printf("%d %d",x[y],d[z]);
	}
	return 0;
}
