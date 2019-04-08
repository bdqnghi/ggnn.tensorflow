
int main(){
	int i,j,n;
	float x[100],y[100],dis=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f%f",&x[i],&y[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(dis<=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2)))
				dis=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2));
		}
	}
	printf("%.4f\n",dis);
	return 0;
}
