int main(){
	int n,i;
	float x[100];
    float y[100];
    float z[100];
	float m[100];
    float GPA;
	float a=0;
	float b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);
		if(x[i]<=100&&x[i]>=90){
			m[i]=4.0;
		}
        if(x[i]<=89&&x[i]>=85){
			m[i]=3.7;
		}
        if(x[i]<=84&&x[i]>=82){
			m[i]=3.3;
		}
        if(x[i]<=81&&x[i]>=78){
			m[i]=3.0;
		}
        if(x[i]<=77&&x[i]>=75){
			m[i]=2.7;
		}
        if(x[i]<=74&&x[i]>=72){
			m[i]=2.3;
		}

		if(x[i]<=71&&x[i]>=68){
			m[i]=2.0;
		}

 	    if(x[i]<=67&&x[i]>=64){
			m[i]=1.5;
		}
        if(x[i]<=63&&x[i]>=60){
			m[i]=1.0;
		}
        if(x[i]<60){
			m[i]=0.0;
		}
	}

	for(i=0;i<n;i++){
        z[i]=y[i]*m[i];
        a=a+z[i];
		b=b+y[i];
	}
	GPA=a/b;
    printf("%.2f",GPA);

	return 0;
}
