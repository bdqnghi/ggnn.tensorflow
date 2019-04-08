int main(){
	int i,n,male=1,female,j,k;
	double shengao,pai[45],huan;
	char x[10];
	scanf("%d",&n);
	female=n;
	for(i=0;i<n;i++){
		scanf("%s\n %lf",x,&shengao);
		if(x[0]=='m'){
			pai[male]=shengao;
			male++;
		}
		if(x[0]=='f'){
			pai[female]=shengao;
			female--;
		}
	}
		male--;
		female++;
		for(j=1;j<=male;j++){
			for(k=j;k<=male;k++){
				if(pai[k]<pai[j]){
					huan=pai[k];
					pai[k]=pai[j];
					pai[j]=huan;
				}
			}
		}
		for(j=male+1;j<=n;j++){
			for(k=j;k<=n;k++){
				if(pai[k]>pai[j]){
					huan=pai[k];
					pai[k]=pai[j];
					pai[j]=huan;
				}
			}
		}
		for(i=1;i<n;i++)
		printf("%.2lf ",pai[i]);
		printf("%.2lf\n",pai[n]);
		return 0;
}
