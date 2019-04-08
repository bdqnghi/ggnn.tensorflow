int main(){
	char zfc1[1005],zfc2[1005];
	int i,j,k;
	scanf("%s",zfc1);
	scanf("%s",zfc2);
	for(i=0;i<strlen(zfc1);i++){
		for(j=0;j<strlen(zfc1);j++){
			if(zfc1[i]==zfc2[j]){
				for(k=i;k<strlen(zfc1);k++){
					zfc1[k]=zfc1[k+1];
				}
				for(k=j;k<strlen(zfc2);k++){
					zfc2[k]=zfc2[k+1];
				}
				j--;
				i--;
			}
		}
	}
	if(strlen(zfc1)==0&&strlen(zfc2)==0) printf("YES");
	else printf("NO");
	scanf("%s",zfc1);
	return 0;
}

