float jd(int x){
      if (x>=90&&x<=100) return 4;
      if (x>=85) return 3.7;
      if (x>=82) return 3.3;
      if (x>=78) return 3;
      if (x>=75) return 2.7;
      if (x>=72) return 2.3;
      if (x>=68) return 2.0;
      if (x>=64) return 1.5;
      if (x>=60) return 1.0;
      return 0;
}
int main(){
    int n,i;
	int xuefen[100];
	int xuefensum;
	float score,GPA,scoresum;
	scanf("%d",&n);
	xuefensum=0;
	scoresum=0;
	for(i=0;i<n;i++){
		scanf("%d ",&xuefen[i]);
	    xuefensum=xuefensum+xuefen[i];
	}
	for(i=0;i<n;i++){
		scanf("%f",&score);
		scoresum=scoresum+jd(score)*xuefen[i];
	}
	GPA=scoresum/xuefensum;
	printf("%.2f",GPA);
	return 0;
}
