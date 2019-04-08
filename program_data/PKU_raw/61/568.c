int main(){
	int n;
	int a[22];
	int i;
	int g,j;
	
	scanf("%d",&g);
	for(j=0;j<g;j++){
		scanf("%d",&n);
		for (i=0;i<n;i++){
			if((i==0)||(i==1)){
				a[i]=1;
			}
			if(i>1){
				a[i]=a[i-1]+a[i-2];
			}
		}
		if(j==0){
			printf("%d",a[n-1]);
		}
		else if(j!=0){
			printf("\n%d",a[n-1]);
		}
	}
    return 0;
	}
