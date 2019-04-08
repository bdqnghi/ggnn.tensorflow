int main() {
	int k,a[200],b[200],m=0,n=0,i;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d%d",&(a[i]),&(b[i]));
		if(a[i]==0&&b[i]==1){
			m++;
		}else if(a[i]==0&&b[i]==2){
			n++;
		}else if(a[i]==1&&b[i]==0){
			n++;
		}else if(a[i]==1&&b[i]==2){
			m++;
		}else if(a[i]==2&&b[i]==1){
			n++;
		}else if(a[i]==2&&b[i]==0){
			m++;
		}
	}
	if(m==n){ 
		printf("Tie");
	}else if(m>n){
		printf("A");
	}else if(m<n){
			printf("B");
		}
	return 0;
}

