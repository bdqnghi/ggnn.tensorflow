int main(){
	int n;
	scanf("%d",&n);
	int r=3,s=0,q=0;
	int p[100000];
    p[0]=2;
    for (r=3;r<=n;r++){
	   for(s=0;p[s]*p[s]<r;s++){
	        if (r%p[s]==0){
		        break;
			}
	   }
	   if(p[s]*p[s]>r){
		  p[q+1]=r;
		  q++;
	   }
	}

	int i,j,k,m;
	for (i=6;i<=n;i=i+2){
		for(j=0;p[j]<=i/2;j++){
			m=i-p[j];
			for(k=0;p[k]*p[k]<i;k++){
				if(m%p[k]==0){
					break;
				}
			}
			if(p[k]*p[k]>i){
				printf("%d=%d+%d\n",i,p[j],m);
				break;
			}
		}
	}
	return 0;
}
