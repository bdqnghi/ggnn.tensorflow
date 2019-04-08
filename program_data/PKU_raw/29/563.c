int main(){
	int m,n,i,u;
	double add,each1[100],each2[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		each1[0]=2;
		each1[1]=3;
		each2[0]=1;
		each2[1]=2;
		add=3.5;
		for(u=2;u<n;u++){
			each1[u]=each1[u-1]+each1[u-2];
			each2[u]=each2[u-1]+each2[u-2];
			add+=1.0*each1[u]/each2[u];
		}
		if(n==1){
			printf("2.000\n");
		}else{
			printf("%.3lf\n",add);
		}
	}
	return 0;
}