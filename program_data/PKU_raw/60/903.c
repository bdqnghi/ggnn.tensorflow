int main(){
	int n,a,b,c=0,i,k=0;
	scanf("%d",&n);
	int*za=(int*)malloc(sizeof(int)*n);
	for(i=2;i<=n;i++){
		b=0;
		for(a=2;a<=i-1;a++){
			if(i%a==0){
				b++;
			}
		}
		if(b==0){
			za[k]=i;
			k++;
		}
	}
	for(i=0;i<k-1;i++){
		if(za[i+1]-za[i]==2){
			c++;
			printf("%d %d\n",za[i],za[i+1]);
		}
	}
	if(c==0){
		printf("empty");
	}
	free(za);
	return 0;
}