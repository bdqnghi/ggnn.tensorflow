int main(){
	int k,x[10],f,sum=0,m;
	float zong,j[10],he=0;
	scanf("%d",&k);
	for(m=0;m<k;m++){
	scanf("%d",&(x[m]));
    sum+=x[m];
	}
	for(m=0;m<k;m++){
	scanf("%d",&f);
	if(f>=90&&f<=100){
	j[m]=4.0;
	}
	else if(f>=85&&f<=89){
	j[m]=3.7;
	}
    else if(f>=82&&f<=84){
	j[m]=3.3;
	}
    else if(f>=78&&f<=81){
	j[m]=3.0;
	}
    else if(f>=75&&f<=77){
	j[m]=2.7;
	}
    else if(f>=72&&f<=74){
	j[m]=2.3;
	}
    else if(f>=68&&f<=71){
	j[m]=2.0;
	}
    else if(f>=64&&f<=67){
	j[m]=1.5;
	}
    else if(f>=60&&f<=63){
	j[m]=1.0;
	}
    else if(f<60){
	j[m]=0;
	}
	}
	for(m=0;m<k;m++){
    he+=j[m]*x[m];
	}
    zong=he/sum;
    printf("%.2f\n",zong);
	return 0;
}