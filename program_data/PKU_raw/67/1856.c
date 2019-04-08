int main(){
	int n,x;
	double z[100],y[100];
	scanf("%d",&n);
	for(x=0;x<n;x++){
		scanf("%lf%lf",&z[x],&y[x]);
	}
	for(x=1;x<n;x++){
		if(y[x]/z[x]>(y[0]/z[0]+0.05)){printf("better");}
		else if(y[x]/z[x]<(y[0]/z[0]-0.05)){printf("worse");}
		else{printf("same");}
		printf("\n");}
		
	return 0;
}