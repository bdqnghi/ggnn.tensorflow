int main(){
	int n, i;
	scanf("%d", &n);
	int xf[10], chj[10];
	int xh;
	float gpa[10];
	float sum, GPA;
	sum =0;
    xh = 0;	
	for(i=0;i<=n-1;i++){
		if(i==0){
			scanf("%d", &xf[i]);
		}else{
			scanf(" %d", &xf[i]);
		}
	}
    for(i=0;i<n;i++){
		if(i==0){
			scanf("%d", &chj[i]);
		}else{
		scanf(" %d",&chj[i]);
		}
		if(chj[i]<=100 && chj[i]>=90){
			gpa[i] = 4.0;
		}else if(chj[i]<=89 && chj[i]>=85){
			gpa[i] = 3.7;
		}else if(chj[i]<=84 && chj[i]>=82){
			gpa[i] = 3.3;
		}else if(chj[i]<=81 && chj[i]>=78){
			gpa[i] = 3.0;
		}else if(chj[i]<=77 && chj[i]>=75){
			gpa[i] = 2.7;
		}else if(chj[i]<=74 && chj[i]>=72){
			gpa[i] = 2.3;
		}else if(chj[i]<=71 && chj[i]>=68){
			gpa[i] = 2.0;
		}else if(chj[i]<=67 && chj[i]>=64){
			gpa[i] = 1.5;
		}else if(chj[i]<=63 && chj[i]>=60){
			gpa[i] = 1.0;
		}else{
			gpa[i] = 0;
		}
	}

	for(i=0;i<=n-1;i++){
		sum = sum + gpa[i] * xf[i];
		xh = xh + xf[i] ;
	}
	  GPA = sum / xh;
	  printf("%.2f", GPA);
	  return 0;
}