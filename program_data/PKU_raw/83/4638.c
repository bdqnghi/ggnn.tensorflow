int main(){
	int n;
	double GPA;
	scanf("%d",&n);
	int sf[n],df[n];
	double x;
	for(int i=0;i<n;i++){
		scanf("%d",&sf[i]);
		x=x+sf[i];
	}
	double q=0,f=0;
	for(int m=0;m<n;m++){
		scanf("%d",&df[m]);
		if(df[m]>=90){
			q=4.0;
}else if(df[m]>=85){
q=3.7;
}else if(df[m]>=82){
q=3.3;
}else if(df[m]>=78){
q=3.0;
}else if(df[m]>=75){
q=2.7;
}else if(df[m]>=72){
q=2.3;
}else if(df[m]>=68){
q=2.0;
}else if(df[m]>=64){
q=1.5;
}else if(df[m]>=60){
q=1.0;
}else{
q=0;
}
f=f+q*sf[m];

	}
	
	GPA=f/x;
	printf("%.2lf",GPA);
	return 0;
}


