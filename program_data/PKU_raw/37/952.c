int main(){
	int n,i,j,l,num;
	char zf[1000];
	scanf("%d",&n);
	for(l=1;l<=n;l++){
		scanf("%s",&zf);
	    for(j=0;zf[j]!='\0';j++){
			num=0;
			for(i=0;zf[i]!='\0';i++){
				if(zf[i]==zf[j]){
					num++;
				}
			}
			if(num==1){
				printf("%c\n",zf[j]);
				break;
			}
		}
		if(zf[j]=='\0'){
			printf("no\n");
		}
	}
	return 0;
}