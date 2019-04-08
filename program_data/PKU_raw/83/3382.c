int main()
{
    int i,n,sumxf=0;
	int xf[10],df[10];
	double GPA,sumGPA=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		if(i<n-1){
			scanf("%d ",&xf[i]);
		}else{
			scanf("%d",&xf[i]);
		}
	}
	for(i=0;i<=n-1;i++){
		if(i<n-1){
			scanf("%d ",&df[i]);
		}else{
			scanf("%d",&df[i]);
		}
	}
	for(i=0;i<=n-1;i++){
		if(df[i]<=100&&df[i]>=90){
			sumGPA+=4.0*xf[i];
		}else if(df[i]<=89&&df[i]>=85){
			sumGPA+=3.7*xf[i];
		}else if(df[i]<=84&&df[i]>=82){
			sumGPA+=3.3*xf[i];
		}else if(df[i]<=81&&df[i]>=78){
			sumGPA+=3.0*xf[i];
		}else if(df[i]<=77&&df[i]>=75){
			sumGPA+=2.7*xf[i];
		}else if(df[i]<=74&&df[i]>=72){
			sumGPA+=2.3*xf[i];
		}else if(df[i]<=71&&df[i]>=68){
			sumGPA+=2.0*xf[i];
		}else if(df[i]<=67&&df[i]>=64){
			sumGPA+=1.5*xf[i];
		}else if(df[i]<=63&&df[i]>=60){
			sumGPA+=1.0*xf[i];
		}else if(df[i]<60){
			sumGPA+=0;
		}
	}
	for(i=0;i<=n-1;i++){
		sumxf+=xf[i];
	}
	GPA=(sumGPA*0.1)/(sumxf*0.1);
	printf("%.2lf",GPA);

    return 0;
}
