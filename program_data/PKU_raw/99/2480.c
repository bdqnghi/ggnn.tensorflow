int main(){
	int n;
	scanf("%d",&n);
	int i;
	int old;
	int n1=0,n2=0,n3=0,n4=0;

	for(i=0;i<n;i++){
		scanf("%d",&old);
		if(old<=18){
			n1+=1;
		}
		if(old>=19&&old<=35){
			n2+=1;
		}
		if(old>=36&&old<=60){
			n3+=1;
		}
		if(old>=61){
			n4+=1;
		}
	}

	double b1=100.0*n1/n;
	double b2=100.0*n2/n;
	double b3=100.0*n3/n;
	double b4=100.0*n4/n;

	printf("1-18: %.2lf%%\n",b1);
	printf("19-35: %.2lf%%\n",b2);
	printf("36-60: %.2lf%%\n",b3);
	printf("60??: %.2lf%%",b4);
	
	return 0;
}