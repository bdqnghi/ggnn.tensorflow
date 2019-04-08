int main(){
	int n,a[100],i,b[100],c,d;
	scanf("%d",&n);
	c=0;
	d=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==b[i]){
		}else if(a[i]==0&&b[i]==1){
			c=c+1;
		}else if(a[i]==1&&b[i]==2){
			c=c+1;
		}else if(a[i]==2&&b[i]==0){
			c=c+1;
		}else if(b[i]==0&&a[i]==1){
			d=d+1;
		}else if(b[i]==1&&a[i]==2){
			d=d+1;
		}else if(b[i]==2&&a[i]==0){
			d=d+1;
		}
	}
	if(c>d){
			printf("A");
	}else if(c==d){
			printf("Tie");
	}else if(c<d){
			printf("B");
	}

	return 0;
}