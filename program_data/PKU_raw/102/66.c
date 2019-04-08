int main(){
    int n,count1=0,count2=0;
	char zf[40][7],q;
    double sg[40];
	scanf("%d%c",&n,&q);
	count2=n-1;
	for(int i=0;i<n;i++){
		scanf("%s",zf[i]);
		int a=strlen(zf[i]);
		if(a==4){
			scanf("%lf",&sg[count1]);
			count1++;
		}else{
			scanf("%lf",&sg[count2]);
			count2--;
		}
	}
	int k,m,d,f;
	double e=0.0,c=0.0;
	for(k=0;k<count1-1;k++){
		for(m=k+1;m<count1;m++){
			if(sg[m]<sg[k]){
				e=sg[k];
				sg[k]=sg[m];
				sg[m]=e;
			}
		}
	}
    for(d=count2+1;d<n;d++){
		for(f=k+1;f<n;f++){
			if(sg[f]<sg[d]){
				c=sg[d];
				sg[d]=sg[f];
				sg[f]=c;
			}
		}
	}
	printf("%.2lf",sg[0]);
	for(int s=1;s<n;s++){
		printf(" %.2lf",sg[s]);
	}
    return 0;
}