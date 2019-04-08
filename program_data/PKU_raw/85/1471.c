int main(){
	char zf[21];
	int n,judge=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%s",zf);
		for(int i=0;zf[i];i++){
			if(!((zf[i]>='0'&&zf[i]<='9'&&i>0)||(zf[i]>='a'&&zf[i]<='z')||(zf[i]>='A'&&zf[i]<='Z')||(zf[i]=='_'))){
			judge=1;
			break;
			}
		}
		if(judge==0){
			printf("yes\n");
		}
		if(judge==1){
			printf("no\n");
		}
		judge=0;
	}
	return 0;
}