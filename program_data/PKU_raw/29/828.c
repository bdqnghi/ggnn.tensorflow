int main(){
	int m,i,k;
	int dcl[50];
	int sz[100];
	sz[0]=1;
	sz[1]=2;
	for(i=2;i<100;i++){
		sz[i]=sz[i-1]+sz[i-2];
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&(dcl[i]));
	}
	for(i=0;i<m;i++){
		double num=0;
		for(k=1;k<=dcl[i];k++){
			num+=sz[k]*1.0/sz[k-1];
		}
		printf("%.3lf\n",num);
	}
	return 0;
}
