int main(){
	int n,i,j,k,LEN;
	int a[30];
	double b[135],e;

	scanf("%d",&n);

	for(i=0;i<=3*n-1;i++){
		scanf("%d",&a[i]);
	}
	k=0;
	for(i=0;i<=3*n-4;i=i+3){
		for(j=i+3;j<=3*n-1;j=j+3){
			b[k]=sqrt((a[i]-a[j])*(a[i]-a[j])+(a[i+1]-a[j+1])*(a[i+1]-a[j+1])+(a[i+2]-a[j+2])*(a[i+2]-a[j+2]));
			b[k+1]=i;
			b[k+2]=j;
			k+=3;
		}
	}
	LEN=n*(n-1)/2;
	for(k = 1;k<=LEN;k++){
		for(i =0;i<LEN-k; i++){
			if(b[3*i]<b[3*i+3]){
					e=b[3*i+3];
					b[3*i+3]=b[3*i];
					b[3*i]=e;
					e=b[3*i+4];
					b[3*i+4]=b[3*i+1];
					b[3*i+1]=e;
					e=b[3*i+5];
					b[3*i+5]=b[3*i+2];
					b[3*i+2]=e;

			}
		}
	}
    for(i=0;i<=3*n*(n-1)/2-1;i=i+3){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[(int)b[i+1]],a[(int)b[i+1]+1],a[(int)b[i+1]+2],a[(int)b[i+2]],a[(int)b[i+2]+1],a[(int)b[i+2]+2],b[i]);
	}

	return 0;
}
