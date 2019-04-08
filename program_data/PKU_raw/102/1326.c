
void sort(float *p1,float *p2,int cri){//cri:1±íê&#190;&#196;D?&#172;-1±íê&#190;&#197;&#174; 
	if((*p1-*p2)*cri>0){
		float temp=*p1;
		*p1=*p2;
		*p2=temp;
	}
}

int main(){
	int k,boynum,b,g;
	b=0;
	g=0;
	float tempheight;
	char tempsex[7];
	scanf("%d",&k);
	float boy[k];
	float girl[k];
	for(int i=1;i<=k;i++){
		scanf("%s %f",tempsex,&tempheight);
		if(strcmp(tempsex,"male\0")==0){
			boy[b]=tempheight;
			b++;
		}
		else{
			girl[g]=tempheight;
			g++;
		}
		
		if(i==k){
			boynum=b;
		}
	}
	for(int i=1;i<=boynum-1;i++){
		for(int j=i+1;j<=boynum;j++){
			sort(&boy[i-1],&boy[j-1],1);
		}
	}
	for(int i=1;i<=k-boynum-1;i++){
		for(int j=i+1;j<=k-boynum;j++){
			sort(&girl[i-1],&girl[j-1],-1);
		}
	}
	printf("%.2f",boy[0]);
	for(int i=2;i<=boynum;i++){
		printf(" %.2f",boy[i-1]);
	}
	for(int i=1;i<=k-boynum;i++){
		printf(" %.2f",girl[i-1]);
	}
	 
}