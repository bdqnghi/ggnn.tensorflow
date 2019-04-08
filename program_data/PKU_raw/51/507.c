int main(){
	char a[501];
	char b[501][5];
	int c[501]={0};
	int n,i,j,k,N;
	int sgn,max=0,num,xtz;
	scanf("%d",&n);
	scanf("%s",a);
	N=strlen(a);
	for(j=0;j<n;j++)
		b[0][j]=a[j];
	b[0][j]=0;
	c[0]++;
	for(i=1,k=1;i<N-n+1;i++){
		for(j=0;j<n;j++)
			b[k][j]=a[i+j];
		b[k][j]=0;
		for(j=0,sgn=1;j<k;j++){
			if(strcmp(b[j],b[k])==0){
				sgn=0;
				xtz=j;
				break;
			}
		}
		if(sgn){
			c[k]++;
			k++;
		}
		else{
			c[xtz]++;
		}
	}
	num=k-1;
	for(i=0;i<=num;i++){
		if(c[i]>max)
			max=c[i];
	}
	if(max==1)
		printf("NO\n");
	else{
		printf("%d\n",max);
		for(i=0;i<=num;i++){
			if(c[i]==max)
				printf("%s\n",b[i]);
		}
	}
	return 0;
}

