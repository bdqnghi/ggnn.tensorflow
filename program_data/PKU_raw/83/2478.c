int main(){
	int n,defen[10],i,zongxuefen=0,xuefen[10];
	double result,sum=0,jidian[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xuefen[i]);
		zongxuefen+=xuefen[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&defen[i]);
		if(defen[i]>=90){
			jidian[i]=4.0;
		}
		else if(defen[i]>=85){
			jidian[i]=3.7;
		}
		else if(defen[i]>=82){
			jidian[i]=3.3;
		}
		else if(defen[i]>=78){
			jidian[i]=3.0;
		}
		else if(defen[i]>=75){
			jidian[i]=2.7;
		}
		else if(defen[i]>=72){
			jidian[i]=2.3;
		}
		else if(defen[i]>=68){
			jidian[i]=2.0;
		}
		else if(defen[i]>=64){
			jidian[i]=1.5;
		}
		else if(defen[i]>=60){
			jidian[i]=1.0;
		}
		else{
			jidian[i]=0;
		}
	}
		for(i=0;i<n;i++){
			sum+=jidian[i]*xuefen[i];
		}
        result=sum/zongxuefen;
		printf("%.2lf",result);
		return 0;
	}
