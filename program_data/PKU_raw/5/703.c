int main(){
	int i,j,l=0,e,f;
	double n,m,k=0;
	char num[2][LEN];
	scanf("%lf",&n);
		for(i=0;i<2;i++){
			scanf("%s",&num[i]);
		}
e=strlen(num[0]);f=strlen(num[1]);
		for(i=0;i<2;i++){
		m=strlen(num[i]);
		for(j=0;j<m;j++){
			if(((num[i][j]!='A')&&(num[i][j]!='C')&&(num[i][j]!='G')&&(num[i][j]!='T'))||(e!=f)){
			printf("error\n");
			l++;
			break;
			}
		}
		if(l>0){
		break;
		}
		}
		for(j=0;j<m;j++){
			if(l==0){
				if(num[0][j]==num[1][j]){
		k++;
		}
		}
		}
		if((l==0)&&(k/m)>n){
		printf("yes\n");
		}else if((l==0)&&(k/m)<=n){
		printf("no\n");
		}
return 0;
}