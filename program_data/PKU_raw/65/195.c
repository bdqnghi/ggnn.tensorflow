int main(){
	int n,a[1000][2],i,j,A=0,B=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(a[i][0]==0&&a[i][1]==0){;}
		if(a[i][0]==1&&a[i][1]==1){;}
		if(a[i][0]==2&&a[i][1]==2){;}
		if(a[i][0]==0&&a[i][1]==1){A++;}
		if(a[i][0]==0&&a[i][1]==2){B++;}
		if(a[i][0]==1&&a[i][1]==0){B++;}
		if(a[i][0]==1&&a[i][1]==2){A++;}
		if(a[i][0]==2&&a[i][1]==0){A++;}
		if(a[i][0]==2&&a[i][1]==1){B++;}
	}
	if(A>B){printf("A");}
	else if(A<B){printf("B");}
	else if(A=B){printf("Tie");}

	return 0;
}