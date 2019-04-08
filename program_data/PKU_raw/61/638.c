int main(){
	int n,m,i,j,a[20],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[0]=1;
		a[1]=1;
		c[i]=0;
		scanf("%d",&m);
		if(m==1||m==2){
			c[i]=1;
		}
		else{
			c[i]=2;
			for(j=2;j<m;j++){
				a[j]=a[j-2]+a[j-1];
				c[i]=a[j];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}