void main(){
	double n,a,i,c1=0.0,c2=0.0,c3=0.0,c4=0.0;
	scanf("%lf",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&a);
		if(a<=18){
			c1=c1+1;
			continue;
		}
		else if(a<36){
			c2=c2+1;
			continue;
		}
		else if(a<61){
			c3=c3+1;
			continue;
		}
		else{
			c4=c4+1;
			continue;
		}
	}
	printf("1-18: %.2lf%%\n",c1/n*100);
	printf("19-35: %.2lf%%\n",c2/n*100);
	printf("36-60: %.2lf%%\n",c3/n*100);
	printf("60??: %.2lf%%\n",c4/n*100);
}
