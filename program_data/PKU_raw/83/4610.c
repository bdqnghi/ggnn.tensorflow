
int main(){
	int n,i,defen[10],xuefen[10],xuefenhe;
	double jidian[10],GPA,jidianhe;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xuefen[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&defen[i]);
	}
	for(i=0;i<n;i++){
		if(defen[i]<60){
			jidian[i]=0;
		}else if(defen[i]<=63){
			jidian[i]=1.0;
		}else if(defen[i]<=67){
			jidian[i]=1.5;
		}else if(defen[i]<=71){
			jidian[i]=2.0;
		}else if(defen[i]<=74){
			jidian[i]=2.3;
		}else if(defen[i]<=77){
			jidian[i]=2.7;
		}else if(defen[i]<=81){
			jidian[i]=3.0;
		}else if(defen[i]<=84){
			jidian[i]=3.3;
		}else if(defen[i]<=89){
			jidian[i]=3.7;
		}else{jidian[i]=4.0;}
	}
	jidianhe=0;
	xuefenhe=0;
	for(i=0;i<n;i++){
		jidianhe=jidianhe+jidian[i]*xuefen[i];
		xuefenhe=xuefenhe+xuefen[i];
	}
	GPA=jidianhe/xuefenhe;
	printf("%.2lf",GPA);
	return 0;
}
