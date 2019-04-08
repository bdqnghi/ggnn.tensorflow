int main(){
	int n,sj[1000][2],i;
	float c[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&sj[i][0],&sj[i][1]);
		c[i]=(float)sj[i][1]/sj[i][0];
	}
	for(i=1;i<n;i++){
		if(c[i]>c[0]&&c[i]-c[0]>0.05){
			printf("better\n");
		}
		else if(c[0]>c[i]&&c[0]-c[i]>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
    return 0;
}

