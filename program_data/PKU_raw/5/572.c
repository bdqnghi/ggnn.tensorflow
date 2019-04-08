int main(){
	char zfc1[505],zfc2[505];
	int i,j;
	double k;
	j=0;
	scanf("%lf",&k);
	scanf("%s",zfc1);
	scanf("%s",zfc2);
	if(strlen(zfc1)!=strlen(zfc2)){
		printf("error");
		scanf("%s",zfc1);
		return 0;
	}
	for(i=0;i<strlen(zfc1);i++){
		if((zfc1[i]!='A'&&zfc1[i]!='T'&&zfc1[i]!='C'&&zfc1[i]!='G')||(zfc2[i]!='A'&&zfc2[i]!='T'&&zfc2[i]!='C'&&zfc2[i]!='G')){
			printf("error");
			scanf("%s",zfc1);
			return 0;
		}
	}
	for(i=0;i<strlen(zfc1);i++){
		if(zfc1[i]==zfc2[i]) j++;
	}
	if(1.0*j/strlen(zfc1)>k) printf("yes");
	else printf("no");
	scanf("%s",zfc1);
	return 0;
}