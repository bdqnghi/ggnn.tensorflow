int main(){
	int n,df;
	float jd,sum1=0,sum2=0,gpa;
	int xf[10];

	scanf("%d\n",&n);
	for(int i=0;i<=(n-1);i++){
		scanf("%d",&xf[i]);
	}
	
	for(int i=0;i<=(n-1);i++){
		scanf("%d",&df);
		if(df>=90)
			jd=4.0;
		if(df>=85&&df<=89)
			jd=3.7;
		if(df>=82&&df<=84)
			jd=3.3;
		if(df>=82&&df<=84)
			jd=3.3;
		if(df>=78&&df<=81)
			jd=3.0;
		if(df>=75&&df<=77)
			jd=2.7;
		if(df>=72&&df<=74)
			jd=2.3;
        if(df>=68&&df<=71)
			jd=2.0;
		if(df>=64&&df<=67)
			jd=1.5;
		if(df>=60&&df<=63)
			jd=1.0;
		if(df<60)
			jd=0;
		sum1=sum1+jd*xf[i];
	}
    for(int i=0;i<=(n-1);i++){
		sum2+=xf[i];
	}
	gpa=sum1/sum2;
	printf("%.2f",gpa);

	return 0;
}