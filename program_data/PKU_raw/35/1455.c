int main(){
int a,b,i,j,k,l,m,n,N=0;
int sz[10][10];
scanf("%d,%d",&a,&b);
for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		scanf("%d",&sz[i][j]);
	}
}
for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		m=0;
		n=0;
		for(k=0;k<a;k++){
			if(sz[i][j]<sz[k][j])
				m++;
		}
        for(l=0;l<b;l++){
			if(sz[i][j]>sz[i][l])
				n++;
		}
		if((m==a-1)&&(n==b-1)){
			printf("%d+%d\n",i,j);
			N++;
		}
	}
}
if(N==0)
printf("No");
return 0;
}
