int main()
{
    float sz[10][10];
	int k;
	float zong=0;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%f",&sz[0][i]);
		zong=zong+sz[0][i];
	}
	float sum;
	sum=0;
	for(int t=0;t<k;t++){
		scanf("%f",&sz[1][t]);
		if(sz[1][t]>=90&&sz[1][t]<=100) sum=sum+4*sz[0][t];
		if(sz[1][t]>=85&&sz[1][t]<=89) sum=sum+3.7*sz[0][t];
		if(sz[1][t]>=82&&sz[1][t]<=84) sum=sum+3.3*sz[0][t];
		if(sz[1][t]>=78&&sz[1][t]<=81) sum=sum+3.0*sz[0][t];
		if(sz[1][t]>=75&&sz[1][t]<=77) sum=sum+2.7*sz[0][t];
		if(sz[1][t]>=72&&sz[1][t]<=74) sum=sum+2.3*sz[0][t];
		if(sz[1][t]>=68&&sz[1][t]<=71) sum=sum+2.0*sz[0][t];
		if(sz[1][t]>=64&&sz[1][t]<=67) sum=sum+1.5*sz[0][t];
		if(sz[1][t]>=60&&sz[1][t]<=63) sum=sum+1.0*sz[0][t];
	    if(sz[1][t]<60) sum=sum+0*sz[0][t];
	}
	float GPA;
	GPA=sum/zong;
	printf("%.2f",GPA);
	return 0;
}
