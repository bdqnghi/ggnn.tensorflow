int main(){
	int m,n,i,k;
	scanf("%d",&m);
	float b[9999],as[9999],c;
	for(k=0;k<m;k++){
		scanf("%d",&n);
		as[0]=1;
		as[1]=2;
		c=0;
		for(i=0;i<n;i++){
			as[i+2]=as[i]+as[i+1];
			b[i]=as[i+1]/as[i];
			c+=b[i];
		}
		printf("%.3f\n",c);
	}return 0;
}
