
int main(){
	int n,i,j,a=1;
	char z[100][21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",z[i]);
	}
	for(i=0;i<n;i++){
		if(z[i][0]=='_'||(z[i][0]>='A'&&z[i][0]<='Z')||(z[i][0]>='a'&&z[i][0]<='z')){
			for(j=1;z[i][j]!='\0';j++){
				if(z[i][j]=='_'||(z[i][j]>='A'&&z[i][j]<='Z')||(z[i][j]>='a'&&z[i][j]<='z')||(z[i][j]>='0'&&z[i][j]<='9')){
					a=a*1;
				}else{
					a=a*0;
				}
			}
		}else{
			a=a*0;
		}
		if(a==1){
			printf("yes\n");
		}else{
			printf("no\n");
			a=1;
		}
	}
	return 0;
}
