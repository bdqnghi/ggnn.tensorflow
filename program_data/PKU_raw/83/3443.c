int main(){
	int n,a,xf[10],df[10],i;
	float s,GPA;
	s=0;
	a=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d",&xf[i]);
	}
    for(i=0;i<n;i++){
		scanf("%d",&df[i]);
	}
	for(i=0;i<n;i++){
		if(90<=df[i]){
			s+=4.0*xf[i];
		}else if(85<=df[i]&&df[i]<=89){
			s+=3.7*xf[i];
		}else if(82<=df[i]&&df[i]<=84){
			s+=3.3*xf[i];
		}else if(78<=df[i]&&df[i]<=81){
			s+=3.0*xf[i];
		}else if(75<=df[i]&&df[i]<=77){
			s+=2.7*xf[i];
		}else if(72<=df[i]&&df[i]<=74){
			s+=2.3*xf[i];
		}else if(68<=df[i]&&df[i]<=71){
			s+=2.0*xf[i];
		}else if(64<=df[i]&&df[i]<=67){
			s+=1.5*xf[i];
		}else if(60<=df[i]&&df[i]<=63){
			s+=1.0*xf[i];
		}else if(df[i]<=60){
			s+=0*xf[i];
		}
		a+=xf[i];
	}
	GPA=s/a;
	printf("%.2f",GPA);

        
	return 0;
	}