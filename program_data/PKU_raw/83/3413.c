int main(){
	int n,f[10],x=0;
    double sf[10],y=0,GPA;
    int i;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(f[i]));
		x+=f[i];
	}
	for(i=0;i<n;i++){
		scanf("%lf",&(sf[i]));
	}
	for(i=0;i<n;i++){
		if(sf[i]>=90&&sf[i]<=100){
			sf[i]=4.0;
		}else if(sf[i]>=85&&sf[i]<=89){
			sf[i]=3.7;
		}else if(sf[i]>=82&&sf[i]<=84){
			sf[i]=3.3;
		}else if(sf[i]>=78&&sf[i]<=81){
			sf[i]=3.0;
		}else if(sf[i]>=75&&sf[i]<=77){
			sf[i]=2.7;
		}else if(sf[i]>=72&&sf[i]<=74){
			sf[i]=2.3;
		}else if(sf[i]>=68&&sf[i]<=71){
			sf[i]=2.0;
		}else if(sf[i]>=64&&sf[i]<=67){
			sf[i]=1.5;
		}else if(sf[i]>=60&&sf[i]<=63){
			sf[i]=1.0;
		}else if(sf[i]<60){
			sf[i]=0;
		}
		sf[i]=f[i]*sf[i];
		y+=sf[i];
	}
	GPA=y/x;
	printf("%.2lf",GPA);

	return 0;
}


