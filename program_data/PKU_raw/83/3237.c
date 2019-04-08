int main(){
	int n;
	int i;
	float c=0,f=0,d,e;
	float GPA;
	scanf("%d",&n);
	int p[10];
	int q[10];
	for( i=0;i<n;i++){
		scanf("%d",&(p[i]));
		c+=p[i];
	}for( i=0;i<n;i++){
        scanf("%d",&(q[i]));
		d=q[i];
		if(d>=90&&d<=100){
	        e=4.0;
		}else if(d>=85&&d<=89){
			e=3.7;
		}else if(d>=82&&d<=84){
            e=3.3;
		}else if(d>=78&&d<=81){
			e=3.0;
		}else if(d>=75&&d<=77){
			e=2.7;
		}else if(d>=72&&d<=74){
			e=2.3;
		}else if(d>=68&&d<=71){
			e=2.0;
		}else if(d>=64&&d<=67){
			e=1.5;
		}else if(d>=60&&d<=63){
			e=1.0;
		}else if(d<60){
			e=0;
		}
		f+=e*p[i];
	}printf("%.2f",GPA=f/c);
	return 0;
}

