int main(){
	int a[25][25],m,n,p,q,s=0,l,f;
	scanf("%d %d",&m,&n);
	for(p=1;p<m+1;p++){
		for(q=1;q<n+1;q++){
			scanf("%d",&a[p][q]);
		}
	}
	for(l=0;l<n+2;l++){
		a[0][l]=0;
		a[m+1][l]=0;
	}
	for(f=0;f<m+2;f++){
		a[f][0]=0;
		a[f][n+1]=0;
	}
	for(p=1;p<m+1;p++){
		for(q=1;q<n+1;q++){
			if(a[p][q]<a[p-1][q]||a[p][q]<a[p+1][q]||a[p][q]<a[p][q+1]||a[p][q]<a[p][q-1]){
				continue;
			}else{
				printf("%d %d\n",p-1,q-1);
			}
		}
	}
	return 0;
}