int main(){
	int n,i,age[100],m=0,x=0,p=0,q=0;
	double M,N,P,Q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++){
		if(age[i]<=18&&age[i]>=1){
			m++;
		}
		if(19<=age[i]&&age[i]<=35){
			x++;
		}
		if(36<=age[i]&&age[i]<=60){
			p++;
		}
		if(age[i]>60){
			q++;
		}
	}
	M=((double)m/n)*100;
	N=((double)x/n)*100;
	P=((double)p/n)*100;
	Q=((double)q/n)*100;
	printf("1-18: %.2lf%%\n",M);
	printf("19-35: %.2lf%%\n",N);
	printf("36-60: %.2lf%%\n",P);
	printf("60??: %.2lf%%\n",Q);
	return 0;
}