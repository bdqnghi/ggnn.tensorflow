int main(){
int k,m,n,i,j,l,sum=0;
int a[100][100];
int b[1000];
scanf("%d\n",&k);
for(i=0;i<k;i++){
	scanf("%d %d",&m,&n);
	for(j=0;j<m;j++){
		for(l=0;l<n;l++){
		scanf("%d",&a[j][l]);
		}

	}
	if((m!=1)&&(n!=1)){
	for(l=0;l<n;l++){
	sum=sum+a[0][l];
	sum=sum+a[m-1][l];
	}
	for(j=1;j<m-1;j++){
	sum=sum+a[j][0];
	sum=sum+a[j][n-1];
	}
	b[i]=sum;
	sum=0;}
	else if(m=1){
		for(l=0;l<n;l++){
		sum=sum+a[0][l];
		b[i]=sum;
		sum=0;
		}
	}
	else if(n=1){
		for(j=0;j<m;j++){
		sum=sum+a[j][0];
		b[i]=sum;
		sum=0;
		}
	}
}
for(i=0;i<k;i++){
printf("%d\n",b[i]);
}
return 0;
}