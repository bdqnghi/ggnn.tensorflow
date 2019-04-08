int main(){
	int n;
	int A=0,B=0,C=0,D=0;
	int i;
//	int sum=0;
	
	int ew[100];
	double a=0,b=0,c=0,d=0;
	scanf("%d",&n);

	for(i=0;i<=n-1;i++){
		scanf("%d",&ew[i]);
	}
//	for(i=0;i<=n-1;i++){
//		sum+=ew[i];
//	}
	for(i=0;i<=n-1;i++){
		if(ew[i]<=18&&ew[i]>=1){
			A++;
		}
		if(ew[i]<=35&&ew[i]>=19){
			B++;
		}
		if(ew[i]<=60&&ew[i]>=36){
			C++;
		}if(ew[i]>=61){
			D++;
		}
	}
	a=(A*1.0/n)*100;
	b=(B*1.0/n)*100;
	c=(C*1.0/n)*100;
	d=(D*1.0/n)*100;

	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",a,b,c,d);
	return 0;
}


