int main(){
	int n,m,k,i,j,mid,judge,timer,l[100],r[100],stop;
	mid=0;
	judge=0;
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%d",&m);
		if(m==0){
			r[k]=60;
		}
		for(i=0;i<m;i++){
			scanf("%d",&l[i]);
		}
		l[m]=60-l[m-1];
		for(i=m-1;i>0;i--){
			l[i]=l[i]-l[i-1];
		}
		for(i=0;i<m;i++){
			if(mid<60){
				mid+=l[i];
			}
			if(mid>=60){
				judge=10000;
				timer=i;
				break;
			}
			if(mid<60){
				mid+=3;
			}
			if(mid>=60){
				judge=33333;
				timer=i;
				break;
			}
		}
	//	printf("judge=%d\n",judge);
		if(judge==10000){
			r[k]=60-3*(i);
		}else if(judge==33333){
			r[k]=60-3*(i)-(3-(mid-60));
		}else if(judge==0){
			r[k]=60-3*i;
		}
		mid=0;
	}
	for(k=0;k<n;k++){
		if(k<n-1){
			printf("%d\n",r[k]);
		}else{
			printf("%d",r[k]);
		}
	}
	scanf("%d",&stop);
	return 0;
}