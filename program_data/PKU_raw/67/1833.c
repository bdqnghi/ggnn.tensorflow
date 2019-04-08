int main(){
	int n,z,e,i,k=0;
	double y[100];
	char x[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&z,&e);
        y[i]=1.0*e/z;
        if(i!=0){
			if(y[i]-y[0]>0.05){
				strcpy(x[k],"better");
			}else if(y[0]-y[i]>0.05){
				strcpy(x[k],"worse");
			}else{
				strcpy(x[k],"same");
			}
			k++;
		}
	}
	for(i=0;i<k;i++){
		printf("%s\n",x[i]);
	}
	return 0;
}