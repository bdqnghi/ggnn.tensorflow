int main(){
	char zfc1[55],zfc2[55];
	int i,j,k;
	scanf("%s",zfc1);
	scanf("%s",zfc2);
	k=0;
	for(i=0;i<strlen(zfc2);i++){
		if(zfc1[0]==zfc2[i]){
			k=i;
			for(j=i;j<i+strlen(zfc1)-1;j++){
				if(zfc1[j-i]!=zfc2[j]){
					k=0;
					break;
				}
			}
		}
		if(k!=0) break;
	}
	printf("%d",k);
	scanf("%s",zfc1);
	return 0;
}