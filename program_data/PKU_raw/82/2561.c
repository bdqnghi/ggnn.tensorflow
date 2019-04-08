int main(){
	int a[100][2],b[100];
	int i,j;
	int h=0;
	int n;
	int k=0;
	int e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if((a[i][0]>=90)&&(a[i][0]<=140)&&(a[i][1]>=60)&&(a[i][1]<=90)){
			h+=1;
		}else{
			b[k]=h;
			k+=1;
			h=0;
		}
	}
	if((a[n-1][0]>=90)&&(a[n-1][0]<=140)&&(a[n-1][1]>=60)&&(a[n-1][1]<=90)){
		b[k-1]=h;
	}
	for(i=0;i<k-1;i++){
		if(b[i]>b[i+1]){
			e=b[i+1];
			b[i+1]=b[i];
			b[i]=e;
		}
	}
	printf("%d",b[k-1]);
	return 0;
}


