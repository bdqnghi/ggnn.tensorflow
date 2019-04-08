int main(){
	int max,max1,t,k,x[28]={0},n,a,b,c,d,i,j;
	char cc,y[100][32],q;
	scanf("%d",&n);
	scanf("%c",&cc);
	for(i=1;i<=n;i++){
		gets(y[i]);
		for(j=2;y[i][j];j++){
			if(y[i][j]>='A'&&y[i][j]<='Z'){
				x[y[i][j]+1-'A']++;}
		}}
	max=x[1];
	max1=1;
	for(i=2;i<=26;i++){
		if(x[i]>max){
			max=x[i];
			max1=i;}}
	q='A'-1+max1;
	printf("%c\n",q);
	printf("%d\n",max);
	for(i=1;i<=n;i++){
		for(j=2;y[i][j];j++){
			if(y[i][j]==q){
				for(t=0;y[i][t];t++){
					if(y[i][t]==' ')break;
					else printf("%c",y[i][t]);
				}
				printf("\n");
			break;
			}
		}
	}
}

	
		