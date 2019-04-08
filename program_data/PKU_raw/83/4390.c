int main(){
    int n,i;
scanf("%d",&n);
	  double fen[10],g[10],sp,sum,gpa;
for(i=1;i<=n;i++){
scanf("%lf",&fen[i]);
}
for(i=1;i<=n;i++){
	scanf("%lf",&g[i]);
}
for(i=1;i<=n;i++){
	if(g[i]>=90){
		g[i]=4.0;
	}else if(g[i]>=85){
		g[i]=3.7;
	}else if(g[i]>=82){
		g[i]=3.3;
	}else if(g[i]>=78){
		g[i]=3.0;
	}else if(g[i]>=75){
		g[i]=2.7;	
	}else if(g[i]>=72){
		g[i]=2.3;
	}else if(g[i]>=68){
		g[i]=2.0;	
    }else if(g[i]>=64){
		g[i]=1.5;
    }else if(g[i]>=60){
		g[i]=1.0;
	}else{
		g[i]=0.0;
	}
}
for(i=1;i<=n;i++){
		sp+=fen[i]*g[i];
		sum+=fen[i];
	}
    gpa=sp/sum;
	printf("%.2lf",gpa);
	return 0;
}