int main(){
int sz[10];
int score[10];
double jidian[10],sumxuefen,sumjidian;
int n,xuefen,s;

scanf("%d",&n);
for(xuefen=0;xuefen<n;xuefen++){
    scanf("%d",&sz[xuefen]);
    sumxuefen+=sz[xuefen];
}
for(s=0;s<n;s++){
    scanf("%d",&score[s]);

}
for(s=0;s<n;s++){
    if((90<=score[s])&&(score[s]<=100)){
        jidian[s]=4.0;
	}else if((85<=score[s])&&(score[s]<=89)){
        jidian[s]=3.7;
	}else if((82<=score[s])&&(score[s]<=84)){
        jidian[s]=3.3;
	}else if((78<=score[s])&&(score[s]<=81)){
        jidian[s]=3.0;
	}else if((75<=score[s])&&(score[s]<=77)){
        jidian[s]=2.7;
	}else if((72<=score[s])&&(score[s]<=74)){
        jidian[s]=2.3;
	}else if((68<=score[s])&&(score[s]<=71)){
        jidian[s]=2.0;
	}else if((64<=score[s])&&(score[s]<=67)){
        jidian[s]=1.5;
	}else if((60<=score[s])&&(score[s]<=63)){
        jidian[s]=1.0;
	}else if(score[s]<60){
        jidian[s]=0;
	}
    sumjidian+=jidian[s]*sz[s];
}
double GPA;
GPA=sumjidian/sumxuefen;
printf("%.2lf",GPA);


return 0;
}




