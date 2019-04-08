int main(){
	int sza[8][8];
	int szb[8][8];
	int i,j;
	int x;
	int h,l;
	int t;
	int hang[8],lie[8];
	int p,q;
	int a=0;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			scanf("%d",&x);
			sza[i][j]=x;
			szb[i][j]=x;
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<l-1;j++){
				if(sza[i][j]>sza[i][j+1]){
					t=sza[i][j+1];
					sza[i][j+1]=sza[i][j];
					sza[i][j]=t;
				}
				hang[i]=sza[i][l-1];
		}
	}
	for(j=0;j<l;j++){
		for(i=h-1;i>0;i--){
				if(szb[i][j]<szb[i-1][j]){
					t=szb[i-1][j];
					szb[i-1][j]=szb[i][j];
					szb[i][j]=t;
				}
				lie[j]=szb[0][j];
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			if(hang[i]==lie[j]){
				p=i;
				q=j;
				a=1;
			}
		}
	}
	if(a==1){
		printf("%d+%d",p,q);
	}else{
		printf("No");
	}
	return 0;
}

