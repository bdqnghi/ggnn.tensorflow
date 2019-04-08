int main(){
	int x[100],y[100];
	int i,n,a=0;
	double g=0,G;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(x[i]));
		a+=x[i];
	}
    for(i=0;i<n;i++){
		scanf("%d",&(y[i]));
	}
	for(i=0;i<n;i++){
		if(y[i]>=90&&y[i]<=100){
			g+=4.0*x[i];
		}else if(y[i]>=85&&y[i]<=89){
			g+=3.7*x[i];
		}else if(y[i]>=82&&y[i]<=84){
			g+=3.3*x[i];
		}else if(y[i]>=78&&y[i]<=81){
			g+=3.0*x[i];
		}else if(y[i]>=75&&y[i]<=77){
			g+=2.7*x[i];
        }else if(y[i]>=72){
			g+=2.3*x[i];
		}else if(y[i]>=68){
			g+=2.0*x[i];
		}else if(y[i]>=64){
			g+=1.5*x[i];
		}else if(y[i]>=60){
			g+=1.0*x[i];
		}
	}
    G=g/a;
    printf("%.2f",G);


	return 0;
}