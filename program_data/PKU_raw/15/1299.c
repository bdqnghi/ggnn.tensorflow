int main(){
	int a[100][100];
	int n;
	scanf("%d",&n);
	int i,k,s;
	s=0;
	int e,b,c,d;
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			scanf("%d",&(a[i][k]));
			if(a[i][k]==0){
			s=s+1;
			}
		}
	}
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if(a[i][k]==0){
				e=i;
				b=k;
				break;
			}
		}	
	}
	for(k=b;k<n;k++){
		if(a[e][k]==255){
			break;
		}
	}
	c=k-1;
	d=(s-2*(c-b+1))/2;
    int S;
	S=d*(c-b-1);
	printf("%d",S);
	return 0;
}
