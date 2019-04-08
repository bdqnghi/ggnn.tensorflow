int main(){
int n,a,i,j,k;
int sz[1000];
int x[1000];
scanf("%d",&n);
sz[0]=1;
sz[1]=1;
for(j=0;j<=n-1;j++){
	scanf("%d",&a);
	if(a>=3){
for(i=0;i<=a-3;i++){
sz[i+2]=sz[i]+sz[i+1];
x[j]=sz[i+2];
}
	}else{
			x[j]=1;
	}
}
for(k=0;k<n;k++){
	printf("%d\n",x[k]);
}

	return 0;
}

