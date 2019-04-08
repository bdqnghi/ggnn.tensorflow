int main(){
	int n,i,z[1000],y[1000],a,b;
	float d,e[1000];
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	d=b*1.0/a;
	for(i=0;i<n-1;i++){
scanf("%d %d",&z[i],&y[i]);
    e[i]=y[i]*1.0/z[i];
	}
	for(i=0;i<n-1;i++){
		if(e[i]-d>0.05){
        printf("better\n");
		}else if(d-e[i]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
	}
	}

	return 0;
}