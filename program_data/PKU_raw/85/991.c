int main(){
	int n;
	int i,j;
	int k[20],l[100];
	char bsf[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",bsf[i]);
	}
	for(i=0;i<n;i++){
		j=0;
		k[i]=0;
		l[i]=strlen(bsf[i]);
		for(j=0;j<l[i];j++){
			if((bsf[i][0]=='_')||(bsf[i][0]>='a'&&bsf[i][0]<='z')||(bsf[i][0]>='A'&&bsf[i][0]<='Z')){
				if((bsf[i][j]=='_')||(bsf[i][j]>='a'&&bsf[i][j]<='z')||(bsf[i][j]>='A'&&bsf[i][j]<='Z')||(bsf[i][j]>='0'&&bsf[i][j]<='9')){
					k[i]++;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(k[i]==l[i]){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	
	return 0;
}