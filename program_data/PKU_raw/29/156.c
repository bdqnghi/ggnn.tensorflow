int fbnq(int a)
{
	if(a==1){
		return 1;
	}
	else{
		if(a==2){
			return 2;
		}
		else{
			return fbnq(a-1)+fbnq(a-2);
		}
	}
}
int main()
{
	int n,i,k,j;
	int sz[100];
	float jieguo[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(k=0;k<n;k++){
		for(j=1;j<=sz[k];j++){
			jieguo[k]=jieguo[k]+(float)fbnq(j+1)/fbnq(j);
		}
		printf("%.3f\n",jieguo[k]);
	}
	return 0;
}