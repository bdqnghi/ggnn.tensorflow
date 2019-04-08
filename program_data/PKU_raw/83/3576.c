int main(){
	int n,i,o,p;
	int xuefen[1000];
	float defen[1000];
	float jidian[1000];
	float sum1=0,sum2=0,GPA;
        scanf("%d",&n);
		for(i=0;i<n-1;i++){
			scanf("%d ",&xuefen[i]);
			sum1=sum1+xuefen[i];
		}
		if(i=n-1){
			scanf("%d",&xuefen[i]);
			sum1=sum1+xuefen[i];
		}
        for(i=0;i<n-1;i++){
			scanf("%f ",&defen[i]);
			p=defen[i];
		 if((90<=p)&&(p<=100)){
				defen[i]=4.0;}
         if((85<=p)&&(p<=89)){
				defen[i]=3.7;} 
         if((82<=p)&&(p<=84)){
				defen[i]=3.3;}
		 if((78<=p)&&(p<=81)){
				defen[i]=3.0;}
		 if((75<=p)&&(p<=77)){
				defen[i]=2.7;}
		 if((72<=p)&&(p<=74)){
				defen[i]=2.3;}
		 if((68<=p)&&(p<=71)){
				defen[i]=2.0;}
		 if((64<=p)&&(p<=67)){
				defen[i]=1.5;}
		 if((60<=p)&&(p<=63)){
				defen[i]=1.0;}
		 if(p<60){
				defen[i]=0;}                                    
		}
		if(i=n-1){
			scanf("%f",&defen[i]);
			p=defen[i];
			if((90<=p)&&(p<=100)){
				defen[i]=4.0;}
         if((85<=p)&&(p<=89)){
				defen[i]=3.7;} 
         if((82<=p)&&(p<=84)){
				defen[i]=3.3;}
		 if((78<=p)&&(p<=81)){
				defen[i]=3.0;}
		 if((75<=p)&&(p<=77)){
				defen[i]=2.7;}
		 if((72<=p)&&(p<=74)){
				defen[i]=2.3;}
		 if((68<=p)&&(p<=71)){
				defen[i]=2.0;}
		 if((64<=p)&&(p<=67)){
				defen[i]=1.5;}
		 if((60<=p)&&(p<=63)){
				defen[i]=1.0;}
		 if(p<60){
				defen[i]=0;}     

		}
		for(i=0;i<n;i++){
			jidian[i]=xuefen[i]*defen[i];
			sum2=sum2+jidian[i];
		}
        GPA=sum2/sum1;
		printf("%.2f",GPA);
return 0;
}