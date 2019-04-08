int main(){
	int a[100],b[100],c[100],n,i,m=0,k;
	for(i=0;i<100;i++){
		c[i]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]>=90&&a[i]<=140)&&(b[i]>=60&&b[i]<=90)){
			c[m]++;
		}else{
			m++;
		}
	}
	for(k=0;k<m;k++){
		for(i=0;i<m-k;i++){
			int d;
			if(c[i]>c[i+1]){
				d=c[i+1];
				c[i+1]=c[i];
				c[i]=d;
			}
		}
	}
	printf("%d",c[m]);
	return 0;
}

