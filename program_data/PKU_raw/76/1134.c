

int main(){
    int n,i,j,e,result=0,max,min,k,num=1;
	int a[3][50001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[0][i],&a[1][i]);
	}
	max=min=a[0][0];
	for(j=0;j<2;j++){
		for(i=0;i<n;i++){
			if(a[j][i]>max)max=a[j][i];
			if(a[j][i]<min)min=a[j][i];
		}
	}
	for(j=n-1;j>0;j--){
		for(i=0;i<j;i++){
			if(a[0][i]>=a[0][i+1]){
				for(k=0;k<2;k++){
					e=a[k][i+1];
				    a[k][i+1]=a[k][i];
				    a[k][i]=e;
				}
			}
		}
	}
	
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(a[1][j]>=a[0][i]){
				num++;
				break;
			}
		}
	}
	if(num==n)result=1;
	if(result==0)printf("no");
	if(result==1)printf("%d %d",min,max);

	return 0;
}